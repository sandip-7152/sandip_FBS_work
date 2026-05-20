class ElectriccityBill
{
    int b_id;
    String name;
    int unit;
    static double RatePerUnit;

    // Static block
    static {
        RatePerUnit = 12.21;
    }

    // Default constructor
    ElectriccityBill() {
        this.b_id = 101;
        this.name = "Sandip";
        this.unit = 7;   // int value
    }

    // Parameterized constructor
    ElectriccityBill(int b_id, String name, int unit) {
        this.b_id = b_id;
        this.name = name;
        this.unit = unit;
    }

    // Setters
    void setB_id(int b_id) {
        this.b_id = b_id;
    }

    void setName(String name) {
        this.name = name;
    }

    void setUnit(int unit) {
        this.unit = unit;
    }

    // Getters
    int getB_id() {
        return this.b_id;
    }

    String getName() {
        return this.name;
    }

    int getUnit() {
        return this.unit;
    }

    // Display
    void display() {
        System.out.println("b_id: " + b_id);
        System.out.println("Name: " + name);
        System.out.println("Unit: " + unit);
        System.out.println("RatePerUnit: " + RatePerUnit);
    }
}

class Test
{
    public static void main(String[] args)
    {
        ElectriccityBill e1 = new ElectriccityBill(102, "Ankush", 4);
        e1.display();
        System.out.println();

        ElectriccityBill e2 = new ElectriccityBill(103, "Chetan Dada", 5);
        e2.display();
        System.out.println();

        ElectriccityBill.RatePerUnit = 3.8;

        System.out.println("After changing RatePerUnit:");
        e1.display();
        e2.display();
    }
}   // ← this brace was missing in your code
