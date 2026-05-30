//Check whether character is vowel or consonant”
import java.util.Scanner;
class Charvowel {
    public static void main (String[]args){
        char ch;
        System.out.println("Enter the character");
        Scanner v=new Scanner(System.in);
        ch = v.next().charAt(0);
        if(ch =='a'||ch == 'e'||ch == 'i'||ch == 'o' || ch == 'u'){
            System.out.println("vowels");
        }
        else
        {
            System.out.println("constant");
        }
    }
}