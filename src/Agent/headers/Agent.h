#pragma once

class Agent
{
public :
	int x;
	int y;
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void move();
	Agent(int xPos, int yPos)
	{
		x = xPos;
		y = yPos;
	}
	Agent()
	{

	}
};