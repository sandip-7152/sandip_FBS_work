import java.io.File;
import java.io.IOException;

class CreateFile {
    public static void main(String[] args) {

        try {

            File f = new File("D:\\new java code\\.txt");

            if (f.createNewFile()) {
                System.out.println("File successfully created");
            } else {
                System.out.println("File already exists");
            }

        } catch (IOException e) {
            System.out.println("Error occurred");
        }
    }
}