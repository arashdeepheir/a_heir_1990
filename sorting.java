/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

/**
 *
 * @author arash
 */
public class sorting {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        
        
        int a[];   
        a = new int[5]; 
	int i,j,num,ch;
	do
	{
	Scanner scan= new Scanner(System.in);
        
	System.out.println("\nDo you want to run the program?(Enter 1 to run/Enter 2 to exit");
	ch=scan.nextInt();
	switch(ch)
	{
	
	case 1:
		{
		
	System.out.println("\nEnter the numbers to be sorted::");
	
	for(i=0;i<5;i++)
	{
		a[i]=scan.nextInt();
		System.out.println("  ");
		
	}
	
	System.out.println("\nList before sorting is::");
	
	for(i=0;i<5;i++)
	{
		System.out.println(a[i]+" ");
		
	}
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
			
			num=a[i];
			a[i]=a[j];
			a[j]=num;
                        }
                }
	}
	
	System.out.println("\nSorted List is:: ");
	
	for(i=0;i<5;i++)
	{
		System.out.println(a[i]+" ");
		
	}
	break;
}

case 2:
	{
		System.exit(0);
	}
}
}while(true);
	

}
        // TODO code application logic here
    }

