// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void isPrime(int n);

 // } Driver Code Ends


//User function Template for C++

//Complete this function
void isPrime(int n)
{
    if(n==1){
    cout<<"No\n";
    return;
    }
    
    for(int i=2;i<=sqrt(n);i++)
    {
        //Write your logic here
        /*n is prime only if it is not divisible by any i. 
        We will not reach till n and 1 is already discarded*/
        if(n%i==0){
        cout<<"No"<<endl;
        return;
        }
    }    
        
        cout<<"Yes"<<endl;
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    isPrime(n);
	    
	}
	return 0;
}  // } Driver Code Ends