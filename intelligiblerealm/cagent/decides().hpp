//File containing the whole logic behind the Agent's Master Mind

Cdecision decides(Caction action)
{
	analyses();//gets maze observable variables (and maybe preprocesses them)
	bool ValidDecision=false;
        Caction action;
	while(~validdecision)
	{
		action=aristoteles(); //sets the action, depending on his priorities
		decision=imagines(action);//IMAGINE AND PREDICT THE RESULTS!
		validdecision=decision.checkaristoteles();//ARE YOU IN HARMONY WITH THE GREAT EMPEROR?
	}
	return decision;
}



