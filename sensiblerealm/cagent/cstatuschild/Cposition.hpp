class Cstatuschild::Cposition
{
	//class position
	private integer x;
	private integer y;

	public GetsPosition(integer& xext, integer& yext){
		xext=x;
		yext=y;
	}
	public SetsPosition(constant integer xext, constant integer yext){
		x=xext;
		y=yext;
	}
}
