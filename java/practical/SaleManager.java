class SaleManager {
    int id;
    String name;
    double salary;
    int target;
    String cname;
	  // Default constructor
    SaleManager() {
        this.id = 2;
	this.name = "chetan";
        this.salary = 70000;
        this.target = 5;
	this.cname = " TCS";
    }

    // Parameterized constructor
   SaleManager(int id, double salary, int target) {
	 this.id = id;
	this.name = name;
        this.salary = salary;
        this.target = target;
	this.cname = cname;
       
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

    void setTarget(int tr) {
        this.target = tr;
    }
   void setCname(String cn) {
        this.cname = cn;
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

    int getTarget() {
        return this.target;
    }
     String getCname() {
        return this.cname;
    }

    // Display method
    void display() {
        System.out.println("id:" + id);
	System.out.println("name:" + name);
        System.out.println("salary:" + salary);
        System.out.println("target:" + target);
	System.out.println("cname:" + cname);
    }
}

class MainSaleManager {
    public static void main(String[] args) {
        SaleManager M1 = new SaleManager();
        M1.display(); 
	//System.out.println();
	//SaleManager M2 = new SaleManager();
        //M2.display(); 
	
    }
}
