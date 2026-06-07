class BankAccount
{
    int Accountno;
    String AccountHolderName;
    double balance;
    static double InterestRate;

    // Static block
    static {
        InterestRate = 4.7;
    }

    // Default constructor
    BankAccount() {
        this.Accountno = 101;
        this.AccountHolderName = "Sandip";
        this.balance = 750000;
    }

    // Parameterized constructor
    BankAccount(int Accountno, String AccountHolderName, double balance) {
        this.Accountno = Accountno;
        this.AccountHolderName = AccountHolderName;
        this.balance = balance;
    }

    // Setters
    void setAccountno(int Accountno) {
        this.Accountno = Accountno;
    }

    void setAccountHolderName(String AccountHolderName) {
        this.AccountHolderName = AccountHolderName;
    }

    void setBalance(double balance) {
        this.balance = balance;
    }

    // Getters
    int getAccountno() {
        return this.Accountno;
    }

    String getAccountHolderName() {
        return this.AccountHolderName;
    }

    double getBalance() {
        return this.balance;
    }

    // Display
    void display() {
        System.out.println("Account No: " + Accountno);
        System.out.println("Account Holder Name: " + AccountHolderName);
        System.out.println("Balance: " + balance);
        System.out.println("Interest Rate: " + InterestRate);
    }
}

// Test class
class Test
{
    public static void main(String[] args)
    {
        BankAccount b1 = new BankAccount(102, "Ankush", 40000);
        b1.display();
        System.out.println();

        BankAccount b2 = new BankAccount(103, "Chetan Dada", 50000);
        b2.display();
        System.out.println();

        // Change interest rate
        BankAccount.InterestRate = 3.8;

        System.out.println("After changing Interest Rate:");
        b1.display();
        b2.display();
    }
}
