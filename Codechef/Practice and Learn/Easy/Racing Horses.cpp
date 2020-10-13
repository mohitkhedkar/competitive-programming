#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t,n,s[n];
	cin>>t;
	
	while(t-- >0) {
	    int ans = INT_MAX;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>s[i];
        for(int i=0;i<n;i++){
             for(int j= i+1;j<n;j++){
                 ans = min(ans,abs(s[i]-s[j]));
             }
    
        }
    	 
    	cout<<ans<<endl;
    	
    }
    return 0;
}
