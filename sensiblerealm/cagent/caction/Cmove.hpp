class Caction::Cmove "SON OF Caction, I don't know how to write it properly"
{
	"implement: try()" //I don't know how to write it properly in java

	Cmovedecision try()
	{
			char direction;

			cout << 'W, A, S, D? ';//please do burocracy and include stdio library and the namespace
			cin >> direction;

			Cmovedecision movedecision(direction);
			return movedecision;
	}
}


class Cdecision::Cmovedecision "SON OF Cdecision, I don't know how to write it properly"
{
	public char direction;
	public Cmovedecision(constant char directionext)
	{
		direction=directionext;
	}
		"IMPLEMENT getvalidity()"
	public bool getvalidity()
	{
		bool validity=false;
		if (direction == W || direction == A || direction == S || direction == D)
			validity=true;
		return validity;
	}
		"IMPLEMENT execute()"
	public execute(){
		switch direction{
			case "W": y++; //access to x,y from agent
			case "A": x--;
			case "S": y--;
			case "D": x++;
			};
	}
}
