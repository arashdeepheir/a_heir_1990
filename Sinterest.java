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
public class Sinterest 
{
    public static void main(String[] args)
    {
        int p,r,t;
        int si,amount;
        
        
        
        do{
          
        Scanner scan = new Scanner(System.in);
        System.out.println("\nDo you want to run the program?(press 1 to enter/press 2 to exit)");
                  
 
        int ch = scan.nextInt();            
        switch (ch)
        {
            
        case 1:
        {
        System.out.println("\nEnter the principle:Rs");
        p= scan.nextInt();
        
        System.out.println("\nEnter rate of interest");
        r= scan.nextInt();
        
        System.out.println("\nEnter the time period for which interest applied");
        t= scan.nextInt();
        
        si=p*r*t/100;
        amount=si+p;
        System.out.println("\nAmount before simple interest applied: Rs"+ p);
        System.out.println("\nAmount after simple interest applied: Rs"+ amount);
        break;
        }
            case 2:{
                System.exit(0);
                break;
            }
            
        }
        }while(true);      
    }
    
}
