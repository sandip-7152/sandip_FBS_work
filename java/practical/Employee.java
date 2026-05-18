class Employee {
    int id;
    String name;
    double salary;

    // Default constructor
    Employee() {
        this.id = 101;
        this.name = "Sandip";
        this.salary = 75000;
    }

    // Parameterized constructor
    Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    // Setter methods
    void setId(int in) {
        this.id = in;
    }

    void setName(String str) {
        this.name = str;
    }

    void setSalary(double sal) {
        this.salary = sal;
    }

    // Getter methods
    int getId() {
        return this.id;
    }

    String getName() {
        return this.name;
    }

    double getSalary() {
        return this.salary;
    }

    // Display method
    void display() {
        System.out.println("Id: " + id);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }
}

class MainEmployee {
    public static void main(String[] args) {
        Employee E1 = new Employee();   
        E1.display();

        System.out.println();

        Employee E2 = new Employee(102, "Ankush", 55000);  
        E2.display();
    }
}
