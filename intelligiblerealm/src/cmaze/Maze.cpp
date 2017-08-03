#include <iostream>
using namespace std;
class Maze{

public:
  int xPosition, yPosition;
  int maze[5][5];

  void MazeInit(){
    for(int i = 0; i < 5; i++)
    {
      for(int j = 0; j < 5; j++)
      {
        maze[i][j] = 0;
      }
      maze[0][i] = 1;
      maze[i][0] = 1;
      maze[4][i] = 1;
      maze[i][4] = 1;
    }
  }

  void MazeDisplay(){
    MazeInit();
    std::cout<<"Welcome to the maze !!!\n"<<std::endl;
    for (int i = 0; i < 5; i++) {
      for (int j = 0; i < 5; i++) {
        std::cout<<maze[i][j]<<"\t"<<std::endl;
      }
      std::cout<<"\n"<<std::endl;
    }
  }
        /*updates();
        Cmazeanswer showsphaenomena(); //Kantsches Phänomen
        vector<Cnoumenon> noumena; //Kantches Noumenona*/
};
