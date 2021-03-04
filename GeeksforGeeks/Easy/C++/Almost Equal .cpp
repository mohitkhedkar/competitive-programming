// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// Function Prototype
int countChars(string, string);

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    
	    cout << countChars(s1, s2) << endl;
	}
	
	return 0;
}// } Driver Code Ends


//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
int countChars(string s1, string s2){
    
    // Your code here
    int x=0;
    for(char c='a';c<='z';c++) {
        if(count(s1.begin(),s1.end(),c)!=count(s2.begin(),s2.end(),c)){
            x=x+abs((count(s1.begin(),s1.end(),c)-count(s2.begin(),s2.end(),c)));
        }
    }
    
    return x;
    
    
}