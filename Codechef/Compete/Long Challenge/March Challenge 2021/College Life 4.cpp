#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
	    ll n,e,h,a,b,c,mincost=1e18;
	    cin>>n>>e>>h>>a>>b>>c;
	    
	    
        for(ll i=0;i<=min({e,h,n});i++){
            ll egg=e, choco=h, count=n;
            egg -= i, choco -= i, count -= i;
            ll cost= i*c;
            
            if(a>b) {
                ll item = min(choco/3,count);
                cost += (item*b);
                count -=item;
                
                item =min(egg/2,count);
                cost += (item*a);
                count -=item;
                
            } else {
                ll item = min(egg/2,count);
                cost +=(item*a);
                count -=item;
                
                item = min(choco/3,count);
                cost +=(item*b);
                count -= item;
            }
            
            if(count == 0){
                mincost = min(mincost,cost);
            }
            
            
            
        }
        cout<<((mincost == 1e18) ? -1 : mincost)<<endl;     
	    
	}
	
	return 0;
}
