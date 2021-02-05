#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    long long n;
	    cin>>n;
	    long long a[n],ans;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	   }
	   
	   sort(a,a+n);
	   
	   ans = (a[1]-a[0])+(a[n-1]-a[1])+(a[n-1]-a[0]);
	   
	   cout<<ans<<endl;
	   
	    
	    
	}
	return 0;
}
