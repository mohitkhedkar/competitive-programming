// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends





// Function to calculate sum of all numbers present
// in a string containing alphanumeric characters
int findSum(string str)
{
	
	// Your code here
	 int n = str.length(),sum = 0,curNum = 0;

    for(int i = 0 ; i < n ; i++) {
        char cur = str[i];

        if(cur >= 48 and cur <= 57)
            curNum = (curNum * 10) + (cur - '0');
        else {
            sum += curNum;
            curNum = 0;
        }

    }
    
    if(curNum != 0)
        sum += curNum;

    return sum;
	
}


// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    cout << findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends