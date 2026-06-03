import java.util.Scanner;
class Armstrong {
    public static void main (String[]args){
        int num,c,r,sum=0;
        System.out.println("Enter the armstrong number");
        Scanner a=new Scanner(System.in);
        num=a.nextInt();
        c=num;
        while(num>0){
            r=num%10;
            sum=sum+(r*r*r);
            num=num/10;
        }
        if(c==sum){
            System.out.println("Armstrong number");
            }
            else{
                System.out.println("not an armstrong number");
            }
    }
}