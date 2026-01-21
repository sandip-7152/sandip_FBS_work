class Car{
	int speed;
	String name;
	String color;
	String company;
	int ger;

}//car class ends here

class CarA{

	public static void main (String []args){

	//Car c1;
	Car c1 = new Car();  
	c1.speed=90;
	c1.company="TATA";
	c1.color="yello";

	c1.name="TATA SIERRA";
	c1.ger=5;
	System.out.println(c1.speed);
	System.out.println(c1.name);
	
	System.out.println(c1.color);
	System.out.println(c1.company+"/"+c1.ger);
	
	}

}

