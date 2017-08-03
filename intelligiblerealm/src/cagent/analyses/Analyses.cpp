#include<iostream>

using namespace std;

public void analyses(){
	Cmazeanswer mazeanswer=Maze.showsphaenomena();//just a interface, I wish I knew how to connect Cmaze with Cagent directly without Cmazeanswer
	Cstatus.update(mazeanswer); //copy observables to knowledge tree, update your knowledge about your environment;
}
