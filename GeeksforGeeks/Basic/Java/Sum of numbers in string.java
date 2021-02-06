// { Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws IOException{
	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	    StringTokenizer st=new StringTokenizer(br.readLine());
	    int t=Integer.parseInt(st.nextToken());
	    while(t-->0){
	        String s=br.readLine();
	        
	        SumNumbers obj = new SumNumbers();
	        
	        System.out.println(obj.findSum(s));
	    }
		
	}
}
// } Driver Code Ends


class SumNumbers{
    // Function to find the sum of all
    // the numbers in the given string s
    public static long findSum(String s){
        
        // your code here
        long sum = 0;
        String str = "";
        s = s + " ";
        
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s.charAt(i);
            if(Character.isDigit(ch)) 
            str += ch;
            else if(str.length() > 0)
            {sum += Integer.parseInt(str);
             str = "";}
        }
        return sum;
        
        
    }
    
}