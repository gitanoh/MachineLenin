public updatespoints(Cmazeanswer pointset){ //Plato's 3rd man argument!!! The maze is just an instance of a greater maze!!!
          for(int i=0;i<np;i++)
                adds(Cmazeanswer pointset[i]);
	};
 public void adds(Cpoint pointbeing){
        char* id=pointbeing.identifies();
        int i=searchpoint(id);
        if (i<=nn)
                Points[i].updates(pointbeing);
        else
                Points.push_back(pointbeing);//learns new points
	};
private int searchpoint(Tid id){
                bool finish=false;
                int i=0;
                while(~finish){
                        if(Points[i].id==id)
                                finish=true;
                        else if(i==nn)
                                {finish=true;i++;}
                        else i++;
                }
                return i;
	};
