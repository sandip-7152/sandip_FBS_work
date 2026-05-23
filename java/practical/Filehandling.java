import java.io.File;
import java.io.IOException;
class Filehandling{
	public static void main (String[]args)
{
	try{

	File f = new File("D:\\new java code\\.txt");
	if(f.createNewFile()){
	System.out.println("file successfully created");
	}else{
	System.out.println("file already existst");
       }
     }catch(IOException e){
	System.out.println("Error occurred");
	}
    }
}
	

