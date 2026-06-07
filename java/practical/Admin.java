class Admin {
    int id;
    String name;
    double salary;
 
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
        System.out.println(id);
        System.out.println(name);
        System.out.println(salary);
        
    }
}

class MainAdmin {
    public static void main(String[] args) {
        Admin A1 = new Admin();

        A1.setId(12);
        A1.setName("Ankush");
        A1.setSalary(75000);
       
        A1.display();   
    }
}
