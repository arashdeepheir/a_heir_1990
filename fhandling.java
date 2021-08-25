/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
//import java.io.File;  
import java.io.IOException;
import java.io.FileWriter;
/**
 *
 * @author arash
 */


/*char datamining(char x)

{
//if x ranges from x to 1 probabilty y (repaeat for other genre of movies)
//create a large dataset of 40 to 50 entries then try with data mining which genre of movie a person might buy using naive bayes

return x;	
}*/


    /**
     * @param args the command line arguments
     * 
     */
class fhandling 
{
    
static int agegroup(int x)
{       
System.out.println("enter your age group(age must be 18 and above\n");
Scanner scan= new Scanner(System.in);
x=scan.nextInt();
	return x;
	/*if(x>18&&x<25)
	{
		return 0.33;
	}
	
	if(x>25&&x<40)
	
	{
		return 0.33;
	}
	
	else
	
	{
		return 0.33;
	}
	 */
}

static char sex(char x)

{
	
	//char m,f;
	System.out.println("\nEnter your sex\n");
	Scanner scan= new Scanner(System.in);
        x=scan.next().charAt(0);
        return x;
	/*
	if(x==m)
	
	{
	return 0.5;
		
	}
	if(x==f)
	{
	return 0.5;
	}

	*/

}

static float income(float x)

{
	
	System.out.println("\n Enter your income range\n");
	Scanner scan= new Scanner(System.in);
        x=scan.nextFloat();
	return x;
/*	if(x>10000&&x<20000)
	
	{
		return 0.33;
	}
	
	if(x>20000&&x<40000)
	
	{
			return 0.33;
	}
	
	if (x>40000)
	{
		return 0.33;
	}*/
	
}	
	


static char genre(char x)
{

System.out.println("\n Enter Genre of Movie");

Scanner scan= new Scanner(System.in);
x=scan.next().charAt(0);
return x;
}
    
 
public static void main(String args[]) 
    {

	int ch;
        int a = 0,x;
        char b = 0,d = 0,y1,y2;
        float c = 0,z;
       
 do{      	
System.out.println("\nDo you want to run the program?(press 1 to enter/press 2 to exit)");
Scanner Scan=new Scanner(System.in);
ch= Scan.nextInt();




	switch(ch)
	{
	
	case 1:
        {
            
            System.out.println("enter 1st datasets");
            
            
             
             x=agegroup(a);
             y1= sex(b);
             z=income(c);
             y2=genre(d);
              try {
            FileWriter myWriter = new FileWriter("filename.txt");
            myWriter.write("\nAgegroup of customer is"+x+"\nSex of customer is"+y1);
            myWriter.write("\nIncome of customer is"+z+"\nGenre of movie selected by customer is"+y2+"\n");
            myWriter.close();
            System.out.println("Successfully wrote to the file.");
    
            } catch (IOException f) {
            System.out.println("An error occurred.");
            f.printStackTrace();
            }
             
             System.out.println("enter 2st datasets");
            
            
             
             x=agegroup(a);
             y1= sex(b);
             z=income(c);
             y2=genre(d);
              try {
            FileWriter myWriter = new FileWriter("filename.txt");
            myWriter.write("\nAgegroup of customer is"+x+"\nSex of customer is"+y1);
            myWriter.write("\nIncome of customer is"+z+"\nGenre of movie selected by customer is"+y2+"\n");
            myWriter.close();
            System.out.println("Successfully wrote to the file.");
    
            } catch (IOException f) {
            System.out.println("An error occurred.");
            f.printStackTrace();
            }
             /*System.out.println("Agegroup of customer is/t" + x);
             System.out.println("Sex of customer is/t" + y1);
             System.out.println("Income of customer is/t" + z);
             System.out.println("Genre of movie selected by customeris /t" + y2);*/
             
             
            /*try {
            File myObj = new File("filename.txt");
            if (myObj.createNewFile()) {
            System.out.println("File created: " + myObj.getName());
            } else {
             System.out.println("File already exists.");
            }
            }
            catch (IOException e) 
            {
             System.out.println("An error occurred.");
             e.printStackTrace();*/
             
             
        
            break;
            }
       	case 2:
		{
		System.exit(0);
        break;
}
}
}while(true);


}
}


	
	


       

