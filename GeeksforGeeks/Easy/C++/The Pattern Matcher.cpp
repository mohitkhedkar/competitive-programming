// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

void follPatt(string );


 // } Driver Code Ends
//User function Template for C++

void follPatt(string s)
{
   //Your code here
       int count=0;
       int count_x=0;
       int count_y=0;
       int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='x') {
                if(count==1){
                    if(count_x != count_y) {
                        flag=1;
                        break;
                    }
                    count=0;count_x=0,count_y=0;
                }
                count_x++;
            }
            else {
                count_y++;count=1;
            }
        }
            if(count_x!=count_y)
            flag=1;
                
                        
        if(flag==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    
}   


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    
	    //function call
	    follPatt(s);
	   
	}
	return 0;
}  // } Driver Code Ends