class Hr {
    int id;
    String name;
    double salary;
	}
	// Default constructor (only once)
    Hr() {
       id = 15;
        name = "sandip";
        salary = 74000;
    }
	// Parameterized constructor
    Hr(int id, String name, double salary) {
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
        System.out.println(id);
        System.out.println(name);
        System.out.println(salary);
       
    }
}

class MainHr {
    public static void main(String[] args) {
        Hr h1 = new Hr();

        h1.setId(15);
        h1.setName("Sandip");
        h1.setSalary(75000);
       

        h1.display();   
    }
}
