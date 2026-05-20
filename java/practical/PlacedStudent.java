class PlacedStudent {
    String cname;
    int distance;

    // Default constructor
    PlacedStudent() {
        this.cname = "Tcs";   
        this.distance = 10;
    }

    // Parameterized constructor
    PlacedStudent(String cname, int distance) {
        this.cname = cname;
        this.distance = distance;
    }

    // Setters
    void setCname(String str) {
        this.cname = str;
    }

    void setDistance(int dis) {
        this.distance = dis;
    }

    // Getters
    String getCname() {
        return this.cname;
    }

    int getDistance() {
        return this.distance;
    }

    // Display method
    void display() {
        System.out.println("Company Name: " + cname);
        System.out.println("Distance: " + distance);
    }
}

class MainPlacedStudent {
    public static void main(String[] args) {

        // Using default constructor
        PlacedStudent P1 = new PlacedStudent();
        P1.display();

        System.out.println();

        // Using parameterized constructor
        PlacedStudent P2 = new PlacedStudent("Deloitte", 15);
        P2.display();
    }
}
