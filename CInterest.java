/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arash*/
import java.util.Scanner;
import java.lang.Math;
class var1
 {
    
        int p,r,t,n;
        
     void var1()
     {
        Scanner scan= new Scanner(System.in);
        System.out.println("\nEnter principle amount:Rs ");
        p=scan.nextInt();
        
        System.out.println("\nEnter rate of interest: ");
        r=scan.nextInt();
      
        System.out.println("\nEnter time period ");
        t=scan.nextInt();
      
        System.out.println("\nNumber of times interest applied ");
        n=scan.nextInt();
        
     }
    
}

class CInterest 
{
    
    public static void main(String[] args)
    {
     int a,num,num1,num2,num3;
     int ch;
     do
     {
     Scanner choice=new Scanner(System.in);
     System.out.println("\nDo you want to run the program?(press 1 to enter/press 2 to exit)");
     ch=choice.nextInt();
     
      switch(ch)
          {
		
            case 1 : 
            {
            var1 obj= new var1();
            obj.var1();
    
            num1=obj.r/obj.n;
            num2=1+num1;
            num=obj.n*obj.t;
            num3=(int) Math.pow(num2,num);

            a=obj.p*num3;
            System.out.println("\n Amount before Compound Interest applied: Rs"+obj.p);
            System.out.println("\n Amount before Compound Interest applied: Rs"+a);
            System.out.println("\n Compound Interest : Rs"+(a-obj.p));
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


