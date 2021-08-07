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

public class Quad_equation {
    
	 
    public static void main(String[] args)
    {
    	
    	double num1,num2,num3,alpha,beta;
        double d,det;
        int ch,a,b,c;
        
        do    
        {
        Scanner scan = new Scanner(System.in);
        System.out.println("\nDo you want to run the program?(press 1 to enter/press 2 to exit)");
                  
 
            ch = scan.nextInt();            
            switch (ch)
            {
		
            case 1 : 
            {
                System.out.println("Enter variables of Quadratic equation ax^2+bx+c=0 \n");
            	
            	a = scan.nextInt();
                b = scan.nextInt();
                c = scan.nextInt();

            	System.out.println("\n:: Quadratic Equation is " + a +"x^2+"+ b +"x+" + c +"=0" );
                
                det=(b*b)-(4*a*c);
                
            	System.out.println("\n Determinent of the Quadratic Equation is "+ det);
                
            	d=Math.sqrt(det);
                
                num1=-b+d;
                num2=2*a;
                num3=-b-d;
                alpha=num1/num2;
                beta=num3/num2;
                System.out.println("\n Roots of the Quadratic Equation are " + alpha + "\t"+ beta);
               
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
