class Cstatuschild::Cposition
{
	//class position
	private integer x;
	private integer y;

	public GetsPosition(integer& xext, integer& yext){
		xext=x;
		yext=y;
	}
	public SetsPosition(constant integer xext, constant integer yext){//should we do this? Wouldn't be more convenient to declare friends?
		x=xext;
		y=yext;
	}
	private bool xp;//if true, x++ is wall
	private bool xm;//if true, x-- is wall
	private bool yp;//if true, y++ is wall
	private bool ym;//if true, y-- is wall
	
}
