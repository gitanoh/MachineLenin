class Cnoumenon::Cspace
{
	int nx;//x length of the maze
	int ny;//y length of the maze
	private bool walldistribution[][];
	public walldistributioninit(){
		ifstream myfile; //Do burocracy and add include iostream & fstream 
		myfile.open("walldistribution.txt");//1 (wall) and 0 ASCII file (it could be a binary file! :P)
		if (myfile.is_open())
  		{
    			for (yy=0;yy<ny;yy++)
				for(xx=0;xx<nx;xx++)
					in >> walldistribution[xx][yy];
    			myfile.close();
  		}
	}
	
	vector<Cpoint>Points;
	#include<updatepoints().hpp>
	
	


	Cposition reveil(){//IMPLEMENTATION from Cnoumenon
		Cposition p;
		p.x=
		p.y=
		p.xp=
		p.xm=
		p.yp=
		p.ym=
	};

}
