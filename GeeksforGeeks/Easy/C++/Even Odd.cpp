// { Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;

// Function prototype
void evenOdd(int, int);


 // } Driver Code Ends


//User function Template for C++

// Function to check if number is even or odd
void evenOdd(int a, int b){
    
    // Your code here
    if(a%2==0){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else{
        cout<<b<<endl;
        cout<<a<<endl;
    }
}

// { Driver Code Starts.

// Driver code to test above function
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int a, b;
	    
	    cin >> a >> b;
	    
	    evenOdd(a, b);
	    
	}
	
	return 0;
}  // } Driver Code Ends