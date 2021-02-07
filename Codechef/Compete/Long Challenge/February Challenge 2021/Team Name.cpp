#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    // your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    string s[n];
	    for(ll i=0;i<=n-1;i++){
	        cin>>s[i];
	    }
	    
	    sort(s,s+n);
	    
	    string p,q;
	    ll ans=0;
	    
	    for(ll i=0;i<n-1;i++){
	        for(ll j=i+1;j<n;j++){
	            p=s[i];
	            q=s[j];
	            
	            swap(p[0],q[0]);
	            
	            if(p[0]==q[0] || p == q ){
	                
	            } else if((!(binary_search(s,s+n,p))) && (!binary_search(s,s+n,q))){
	                ans +=2;
	            }
	        }
	    }
	    
	    cout<<ans<<endl;
	    
	}
	
	return 0;
}
