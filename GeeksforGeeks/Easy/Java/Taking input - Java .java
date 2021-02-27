// { Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


 // } Driver Code Ends
//User function Template for Java

class Geeks{
    
    // Function to take input using Scanner class
    static void IOFunction(){
        Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0){
		    
		    // Your code here
		    int a=sc.nextInt();
            double b=sc.nextDouble();
            long c=sc.nextLong();
            int d=sc.nextInt();
            sc.nextLine();
            
            String s=sc.nextLine();
            
            System.out.println(a);
            System.out.println(b);
            System.out.println(c);
            System.out.println(d);
            System.out.println(s);

		    
		}
		
    }
    
}

// { Driver Code Starts.


class GFG {
    
    // Driver Code
    public static void main (String[] args) {
	    
	       //Creating an object of class Geeks
	       Geeks g = new Geeks();
		
		   //Calling the IOFunction() of class Geeks
		   g.IOFunction();
	}
}  // } Driver Code Ends