#pragma once
#include <iostream>
#include <Windows.h>

class Maze
{
public:
	int map[20][20];

	void init();
	void display();
	bool status(int, int);
	bool mapUpdate(int, int, int , int);
	Maze()
	{

	}
	~Maze()
	{

	}
};
