/*	father		children			->moveRight,moveLeft, etc
			-> Cactiontype(move,fight)	->attack, deffend, etc
	Cdecision

*/
class Cdecision
{
	virtual bool checkaristoteles() = 0;//Defined in the sensible realm
	virtual bool getvalidity() = 0;//to be herited and implemented by children
	virtual execute() = 0;
}
	
