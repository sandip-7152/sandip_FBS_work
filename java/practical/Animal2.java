class Animal2{
 	void sound(){
	System.out.println("this animal sound d");
	}
}
class Dog extends Animal2 {
	void bhou(){
	System.out.println("this sound in b");
	}	
}
class Main{
	public static void main (String[]args){
	Dog a = new Dog();
	a.sound();
	a.bhou();
	}
}