#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n,k,d;
	    cin>>n>>k>>d;
	    int a[n],sum=0;
	    for (int i =0;i<n;i++){
	        cin>>a[i];
	        sum +=a[i];
	        
	        
	    }
	    cout<< min((sum/k),d)<<endl;
	    
	    
	    
	}
	
	
	
	return 0;
}
