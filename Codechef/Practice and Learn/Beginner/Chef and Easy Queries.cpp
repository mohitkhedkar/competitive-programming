#include <iostream>
using namespace std;
#define ll long long

ll int chefQuery(ll int s[], ll int n, ll int k) {
    ll int a=0, c;
    for (ll int i=0;i<n;i++){
        a+=s[i]-k;
        if(a<0)
            return i+1;
    }
    
    c=n;
    a= a/k;
    return c+a+1;
    
}

int main() {
	// your code goes here
	ll int t,n;
	ll int k;
	cin>>t;
	
	while(t--) {
	    cin>>n>>k;
	    ll int s[n];
	    for(ll int i=0;i<n;i++){
	        cin>>s[i];
	   }
	   
	     cout<<chefQuery(s,n,k)<<endl;
	}
	
	return 0;
}
