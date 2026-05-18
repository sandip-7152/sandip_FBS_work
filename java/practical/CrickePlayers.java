	import java.util.Scanner;

class Player {
    String name;
    int matches;
    int runs;
    int wickets;

    // Accept information
    void acceptInfo() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Player Name: ");
        name = sc.nextLine();

        System.out.print("Enter Number of Matches: ");
        matches = sc.nextInt();

        System.out.print("Enter Runs Scored: ");
        runs = sc.nextInt();

        System.out.print("Enter Wickets Taken: ");
        wickets = sc.nextInt();
    }

    // Display information
    void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Matches: " + matches);
        System.out.println("Runs: " + runs);
        System.out.println("Wickets: " + wickets);
        System.out.println("----------------------------");
    }
}

public class MainCricketPlayers {
    public static void main(String[] args) {

        Player[] Player= new Player[10];

        // Create objects
        for (int i = 0; i < 10; i++) {
            Player[i] = new Player();
        }

        // Accept details
        System.out.println("Enter details of 10 Players:");
        for (int i = 0; i < 10; i++) {
            System.out.println("\nPlayer " + (i + 1));
            CrickePlayers[i].acceptInfo();
        }

        // Display details
        System.out.println("\nAll Player Details:");
        for (int i = 0; i < 10; i++) {
            Player[i].displayInfo();
        }

        // Find maximum runs
        Player maxRunPlayer = Player[0];
        for (int i = 1; i < 10; i++) {
            if (players[i].runs > maxRunPlayer.runs) {
                maxRunPlayer = players[i];
            }
        }

        // Find maximum wickets
        Player maxWicketPlayer = players[0];
        for (int i = 1; i < 10; i++) {
            if (players[i].wickets > maxWicketPlayer.wickets) {
                maxWicketPlayer = players[i];
            }
        }

        System.out.println("\nPlayer with Maximum Runs:");
        maxRunPlayer.displayInfo();

        System.out.println("\nPlayer with Maximum Wickets:");
        maxWicketPlayer.displayInfo();
    }
}
		
	


	
	 
	