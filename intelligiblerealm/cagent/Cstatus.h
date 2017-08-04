//Class Cstatus

class Cstatus
{
	public update(Cmazeanswer mazeanswer){
	  for(int i=0;i<nn;i++)
	    	adds(mazeanswer.reveilednoumena[i]);
	}
	public void adds(Cstatuschild reveilednoumenon){
                Tid id=reveilednoumenon.identify();
                int i=searchnoumenon(i);
                if (i<=nn)
			statusvariables[i].updates(reveilednoumenon);
		else
			statusvariables.push_back(reveilednoumenon);//learns new noumenon
	}
        private int searchnoumenon(Tid id){
                bool finish=false;
                int i=0;
                while(~finish){
                        if(statusvariables[i].id==id)//Cstatus.statusvariables
                                finish=true;
                        else if(i==nn)
                                {finish=true;i++;}
                        else i++;
                }
                return i;
        }

 	public vector<Cstatuschild> statusvariables;
  	//Cstatuschild::CPosition position;
	//Cstatuschild::CHealth health;
	// ... children on the sensible world should complete
	int nn; //number of learnt noumena
}
