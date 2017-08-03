class Cmazeanswer{
	vector<Cstatuschild> reveilednoumena;
        checkvalidity(){        //auxiliary function, unnecessary in principle
                if (status.nn>reveilednoumena.length())
                      ERROR('maze should provide vewer variables');
                else if (status.nn<reveilednoumena.length())
                      ERROR('maze should provide more variables');
        };
	private int searchnoumenon(Tid id){
		bool finish=false;
		int i=0;
		while(~finish){
			if(statusvariables[i].id==id)//Cstatus.statusvariables
				finish=true;
			else if(i==nn)
				ERROR("Agent has found an unexpected Noumenon");
			else i++;
		}
		return i;
	}
}
