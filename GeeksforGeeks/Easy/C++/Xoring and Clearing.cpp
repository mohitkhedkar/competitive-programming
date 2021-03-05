// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void printArr(int ,int );

void setToZero(int ,int );

void xor1ToN(int , int );


 // } Driver Code Ends
//User function Template for C++

void printArr(int arr[],int n)
{
    //Your code for printing array here
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void setToZero(int arr[],int n)
{
   //Use memset to set arr to zero
   memset(arr, 0 , n*sizeof(int));
   
}

void xor1ToN(int arr[], int n)
{
   //Xor arr[i]^i
   for(int i=0;i<n;i++){
       arr[i]=arr[i]^i;
   }
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    xor1ToN(arr,n);
	    printArr(arr,n);
	    setToZero(arr,n);
	    printArr(arr,n);
	}
	return 0;
}

  // } Driver Code Ends