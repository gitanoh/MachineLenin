#include"../headers/Maze.h"
#include<iostream>
using namespace std;
void Maze::init()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			map[i][j] = 0;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		map[i][0] = 1;
		map[0][i] = 1;
		map[19][i] = 1;
		map[i][19] = 1;
	}
	map[18][18] = 10;
}

void Maze::display()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			switch (map[i][j])
			{
			default: cout << " ";
				break;
			case 1: cout << "#";
				break;
			case 5: cout << "&";
				break;
			case 10: cout << "@";
				break;
			}
		}
		cout << "\n";
	}
}

bool Maze::status(int x, int y)//whether you win or not
{
	bool status = false;
	if ((x == 18) && (y == 18))
	{
		status = true;
		Beep(195.998, 1000);
	}
	return status;
}

bool Maze::mapUpdate(int x, int y, int a, int b)//x,y new positon; a, b current position 
{
	if (map[x][y] != 1)
	{
		map[a][b] = 0;
		map[x][y] = 5;
		return true;
	}
	else
	{
		Beep(440, 500);
		return false;
	}
}