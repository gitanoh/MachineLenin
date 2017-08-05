#include "Maze\headers\Maze.h"
#include"Agent\headers\Agent.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	Maze myMaze;
	Agent myAgent(1,1);
	myMaze.init();
	myMaze.mapUpdate(1, 1, 1, 1);
	while (!myMaze.status(myAgent.getX(), myAgent.getY()))
	{
		system("cls");
		myMaze.display();
		int x_temp = myAgent.getX();//current agent's position
		int y_temp = myAgent.getY();
		myAgent.move();
		myMaze.mapUpdate(myAgent.getX(), myAgent.getY(), x_temp, y_temp);
		cin.get();
	}
	
	cin.get();
	return 0;
}