#include"Agent\headers\Agent.h"
#include"Maze\headers\Maze.h"
#include<iostream>

using namespace std;

void Agent::move()
{
	Maze maze;
	char c;
	int x_temp = x;//store current position
	int y_temp = y;
	cin >> c;
	switch (c)
	{
	default:
		break;
	case 'd':
		y = y + 1;
		break;
	case 'q':
		y = y - 1;
		break;
	case 'z':
		x = x - 1;
		break;
	case 's':
		x = x + 1;
		break;
	}
	//if the move is not available restore last position
	if (!maze.mapUpdate(x, y, x_temp, y_temp))
	{
		x = x_temp;
		y = y_temp;
	}
}