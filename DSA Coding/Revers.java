import java.util.Scanner;
class Revers{
	public static void main (String [] args){
	int num;
	int revers;
	 System.out.println("Enter the number");
         Scanner r = new Scanner(System.in);
         num=r.nextInt();
	while(num > 0)
	{
	revers = num % 10;
	num = num / 10;
	System.out.print(revers);
	}
     }
}