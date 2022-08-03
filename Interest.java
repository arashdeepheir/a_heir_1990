/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */
package com.mycompany.mavenproject1;

/**
 *
 * @author Heir
 */
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
    
  public void compound(int CI)
    {
     int num,num1,num2,num3;
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

            CI=obj.p*num3;
            System.out.println("\n Amount before Compound Interest applied: Rs"+obj.p);
            System.out.println("\n Amount before Compound Interest applied: Rs"+CI);
            System.out.println("\n Compound Interest : Rs"+(CI-obj.p));
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
    
    
   public void simple(int SI,int amount)
    {
        int p,r,t;
        //int amount;
        
        
        
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
        
        SI=p*r*t/100;
        amount=SI+p;
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
     
    

    class Interest 
{
   
     
     public static void main(String[] args)
    {
        int a,b,c;
        
        compound(a);
        simple(b,c);
        
        
    }
}
}

