import java.util.Scanner;

  public class searching
   {
    	 
    public static void main(String[] args)
    {
    	
    	int[8] a;
    	int ch,num
        do    
        {
        Scanner scan = new Scanner(System.in);
        System.out.println("\nDo you want to run the program?(press 1 to enter/press 2 to exit)");
                  
 
            int ch = scan.nextInt();            
            switch (ch)
            {
            case 1 : 
            {
                System.out.println("\nEnter numbers::");
            	for(i=0;i<8;i++)
            	{
            	
            		int a[i] = scan.nextInt();
                }
            	System.out.println("\nEntered list of numbers::");
            	
            	for(i=0;i<8;i++)
            	{
            	
            		System.out.println(a[i]+"\t");
                } 

            	System.out.println("\nEnter the number you want to search:: ");
            	


            	int num = scan.nextInt();

                for(i=0;i<8;i++)
                {
            	if(a[i]==num)
            	{
            		break;
            	}
                }
            	if(i==8)
            	
                {

            		System.out.println("\nNumber is not in the list");
            	
                }
                else
                {
            	System.out.println("\nNumber is at position number:"+ i+1);
                }
            	break;
            	}
            	
               
                
                                      
            case 2 :
            	{
            	exit;  
            	break;                        
            
            	}
            	}
 
            	} while(1);  
    }
}