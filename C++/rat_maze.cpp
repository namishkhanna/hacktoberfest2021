//given mxn maze find and count all possible paths that helps in escaping the rat
#include <iostream>

// Maze size
#define N 4

bool solveMazeUtil(
	int maze[N][N], int x,
	int y, int sol[N][N]);

//Function to print solution in matrix form
void printSolution(int sol[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			printf(" %d ", sol[i][j]);
		printf("\n");
	}
}

//function to ckeck whether x,y values is valid or not
bool isSafe(int maze[N][N], int x, int y)
{
	// if (x, y outside maze) return false
	if (
		x >= 0 && x < N && y >= 0
		&& y < N && maze[x][y] == 1)
		return true;

	return false;
}

/* It mainly uses solveMazeUtil() to solve the maze problem using backtracking. Returns false if no path is possible, otherwise return true and prints the path in the form of 1s. There can be more than one solution , here it will take any of the feasible solution*/
bool solveMaze(int maze[N][N])
{
	int sol[N][N] = { { 0, 0, 0, 0 },
					{ 0, 0, 0, 0 },
					{ 0, 0, 0, 0 },
					{ 0, 0, 0, 0 } };

	if (solveMazeUtil(
			maze, 0, 0, sol)
		== false) {
		printf("Solution doesn't exist");
		return false;
	}

	printSolution(sol);
	return true;
}

//A recursive function to solve maze problem
bool solveMazeUtil(
	int maze[N][N], int x,
	int y, int sol[N][N])
{
	// if (x, y is goal) return true
	if (
		x == N - 1 && y == N - 1
		&& maze[x][y] == 1) {
		sol[x][y] = 1;
		return true;
	}

	// Check if maze[x][y] is valid
	if (isSafe(maze, x, y) == true) {
		// Check if the current block is already part of solution path.
		if (sol[x][y] == 1)
			return false;
	
		// mark x, y as part of solution path
		sol[x][y] = 1;

		//Move forward in x direction
		if (solveMazeUtil(
				maze, x + 1, y, sol)
			== true)
			return true;

		//If moving in x direction doesn't give solution then Move down in y direction
		if (solveMazeUtil(
				maze, x, y + 1, sol)
			== true)
			return true;
	
		//If none of the above movements work then BACKTRACK: unmark x, y as part of solution path 
		sol[x][y] = 0;
		return false;
	}

	return false;
}

//Main function
int main()
{
	int maze[N][N] = { { 1, 1, 1, 0 },
					{ 1, 1, 0, 0 },
					{ 1, 0, 0, 1 },
					{ 1, 1, 1, 1 } };

	solveMaze(maze);
	return 0;
}