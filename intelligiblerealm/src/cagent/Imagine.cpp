Cdecision imagine(Caction action)
/*Philosophical detail:
	In this while loop, tactical validity is checked: Motion cannot be towards the DARKNESS, or you cannot hurt yourself, etc.
	The loop inside function decides() is STRATEGIC, not tactical, and it is fully related to aristoteles.
*/

{
	Cdecision tacticaldecision;
	bool finish=0;
	while(~finish) //Imagining a tactical valid action may not be so evident, and more than one trial can be done
	{
		tacticaldecision=action.try(); //Internally things should change so as to not get a infinite loop
				//Maybe determining that no Caction may be possible is another thing to implement and set a flag impossibility
		finish=tacticaldecision.getvalidity();//check that the action is realizable: tactical correctness
	}
	return tacticaldecision;
}



