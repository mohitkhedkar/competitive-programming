#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n,d;
	    cin>>n>>d;
	    int a[n];
	    for(int i=1;i<=n;i++) {
	        cin>>a[i];
	    }
	    int risk=0,not_risk=0;
	    for(int i=1;i<=n;i++) {
	        if(a[i]>=80 || a[i]<=9){
	            risk++;
	        } else {
	            not_risk++;
	        }
	    }
	    
	    int ans;
	    ans = ceil((double)risk/(double)d) + ceil((double)not_risk/(double)d);
	    cout<<ans<<endl;
	    
	}
	
	return 0;
}
