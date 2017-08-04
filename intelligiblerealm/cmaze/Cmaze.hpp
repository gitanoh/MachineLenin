class Cmaze{
	int nn;//Number of Noumena
        void updates(){
		for (int i=0;i<nn;i++)
			noumena[i].updates();
	};
        Cmazeanswer showsphaenomena(){
		Cmazeanswer mazeanswer;
		for(int i=0;i<nn;i++)
			mazeanswer.reveilednoumena.push_back(noumena[i].reveils());//not that high-level-coding but I'm lazy right now
		return mazeanswer;
	};
        vector<Cnoumenon> noumena; //Kantche Noumena
}
