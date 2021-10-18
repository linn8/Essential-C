/*
 * C: A modern approach, Array chapter, project 9
 
	Write a program that generates a “random walk" across a 10 x 10 array. The array will con­
	tain characters (all ’ . ’ initially). The program must randomly “walk” from element to ele­
	ment; always going up, down. left, or right by one element. The elements visited by the
	program will be labeled with the letters A through Z, in the order visited. Here's an example
	of the desired output:

	 A B C . . . . . . .
	 . . D . . . . . . .
	 . . E . . . . . . .
	 . . F G H . . . . .
	 . L K J I . . . . .
	 N M . . . . . . . .
	 O P . Z . . . . . .
	 . Q X Y . . . . . .
	 S R W . . . . . . .
	 T U V . . . . . . .
	 Hint: Use the srand and rand functions (see d e a l . c ) to generate random numbers.
After generating a number, look at its remainder when divided by 4. There are four possible
values for the remainder— 0. 1 .2 , and 3— indicating the direction of the next move. Before
performing a move, check that (a) it won’t go outside the array, and (b) it doesn’t take us to
an element that already has a letter assigned. If either condition is violated, try moving in
another direction. If all four directions are blocked, the program must terminate. Here’s an
example of premature termination
	 A B E F G . . . . .
	 . C D M H . . . . .
	 . . . L I . . . . .
	 . . . K J . . . . .
	 . . . . . . . . . .
	 . . . . . . . . . .
	 . . . . . . . . . .
	 . . . . . . . . . .
	 . . . . . . . . . .
	 . . . . . . . . . .
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char grid[10][10] = {0}, letter = 'A';
	int row = 0, column = 0, move;
	bool up, down, left, right;	
	grid[row][column] = letter++;

	srand((unsigned) (time(NULL)));
	while(letter <= 'Z')
	{
		up = down = left = right = false;


		if (row-1 >= 0 && grid[row-1][column] == 0) // if up direction is not blocked
			up = true;
		if (row+1 < 10 && grid[row+1][column] == 0)
			down = true;
		if (column-1 >= 0 && grid[row][column-1] == 0)
			left = true;
		if (column+1 < 10 && grid[row][column+1] == 0)
			right = true;

		if (!up && !down && !left && !right)	// if all direction is blocked
			break;

		move = rand() % 4;
		switch(move)
		{
			case 0:
				if (up)	// if up direction is not blocked, walk that direction
					grid[--row][column] = letter++;
				break;
			case 1:
				if (down)
					grid[++row][column] = letter++;
				break;
			case 2:
				if (left)
					grid[row][--column] = letter++;
				break;
			case 3:
				if (right)
					grid[row][++column] = letter++;
				break;
		}
	}

	for(row = 0; row < 10; row++)
	{
		for(column = 0; column < 10; column++)
			if (grid[row][column] == 0)
				printf(" .");
			else
				printf(" %c", grid[row][column]);
		printf("\n");
	}
}
