import java.util.Scanner;

class Fibonacci {
    public static void main(String[] args) {
        int term, a = 0, b = 1, c;

        System.out.print("Enter the term: ");
        Scanner f = new Scanner(System.in);
        term = f.nextInt();

        for (int i = 1; i <= term; i++) {
            System.out.print(a + " ");
            c = a + b;
            a = b;
            b = c;
        }
    }
}