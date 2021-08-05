/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arash
 */
import java.util.Scanner;

  public class Search
   {
    	 
    public static void main(String[] args)
    {
    	
    	int[] a= new int[8];
    	int ch,num;
        int i;
        do    
        {
        Scanner scan = new Scanner(System.in);
        System.out.println("\nDo you want to run the program?(press 1 to enter/press 2 to exit)");
                  
 
            ch = scan.nextInt();            
            switch (ch)
            {
		
            case 1 : 
            {
                System.out.println("\nEnter numbers::");
            	for(i=0;i<8;i++)
            	{
            	
            		a[i] = scan.nextInt();
                }
            	System.out.println("\nEntered list of numbers::");
            	
            	for(i=0;i<8;i++)
            	{
            	
            		System.out.println(a[i] + "\t");
                } 

            	System.out.println("\nEnter the number you want to search:: ");
            	


            	num = scan.nextInt();

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
            	System.out.println("\nNumber is at position number:"+(i+1));
                }
            	break;
            	}
            	
               
                
                                      
            case 2 :
            	{
            	System.exit(0);  
            	break;                        
            
            	}
            	}
 
            	} while(true);  
    }
}
