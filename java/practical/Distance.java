class Distance {
    int feet;
    double inches;

	// Default constructor
    Distance() {
        this.feet = 11;
	this.inches = 12.9;
    }

    // Parameterized constructor
     Distance(int feet,  double inches) {
	this.feet = feet;
	this.inches = inches;	
    }


    void setFeet(int fe) {
        this.feet = fe;
    }

    void setInches(double in) {
        this.inches = in;
    }

    int getFeet() {
        return this.feet;
    }

    double getInches() {
        return this.inches;
    }

    void display() {
        System.out.println("feet:" + feet);
        System.out.println("inches:" + inches);
    }
}

class MainDistance {
    public static void main(String[] args) {
        Distance D1 = new Distance();
        D1.display();
	
	Distance D2 = new Distance(10,8.9);
        D2.display();
    }
}

