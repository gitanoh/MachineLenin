/*main function
	Evaluates agent decisions, maze answers and if victory has been achieved.
	Makes the game evolute.
*/

#include <iostream>
#include <Maze.h>

int main(){

	Maze myMaze;


	myMaze.MazeDisplay();

	/*bool defeat=true;//Schopenhauer: life is a defeat, until we get what we want. Then, we will desire another thing, and we will thus be in defeat again. Life is a defeat.

	while(defeat)
	{

		agent.decides(); //decision algorithm for the current environment
		agent.acts(); //agent acts (i.e. moves to an eligible position)
		if (victory()) //victory evaluates condition to win
			defeat=false;
		else
			maze.updates(); //maze updates, case of changing maze with time (ennemies spawn, moving walls...)



	}*/
	return 0;
}
