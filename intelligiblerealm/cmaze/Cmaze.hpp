class Cmaze{
	int nn;//Number of Noumena
        void updates();//not yet implemented, but this time it must do nothing
        Cmazeanswer showsphaenomena(){
		Cmazeanswer mazeanswer;
		for(int i=0;i<nn;i++)
			mazeanswer.reveilednoumena.push_back(noumena[i].reveils());//not that high-level-coding but I'm lazy right now
		return mazeanswer;
	};
        vector<Cnoumenon> noumena; //Kantche Noumena

}
