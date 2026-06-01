  import java.util.Scanner;

class Palindrome2 {
    public static void main(String[] args) {

        int n, s = 0, c, r;
        Scanner p = new Scanner(System.in);

        System.out.print("Enter number: ");
        n = p.nextInt();

        c = n;

        while (n > 0) {
            r = n % 10;
            s = (s * 10) + r;
            n = n / 10;
        }

        if (c == s) {
            System.out.println("Palindrome number");
        } else {
            System.out.println("Not a palindrome number");
        }
    }
}