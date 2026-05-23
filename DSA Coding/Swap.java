import java.util.Scanner;
class Swap {
	public static void main(String[]args){
	int a;
	int b;
	int temp;
	System.out.println("Enter the number");
	Scanner s = new Scanner(System.in);
	a=s.nextInt();
	b=s.nextInt();
	System.out.println("Before Swap number = : " + a + " " + b);
	temp = a;
	a=b;
	b=temp;
	System.out.println("After Swap number = : " + a + " " + b);
	}
}