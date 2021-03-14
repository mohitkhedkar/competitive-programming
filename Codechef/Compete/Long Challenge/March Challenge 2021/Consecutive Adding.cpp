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
	    ll r,c,x;
	    cin>>r>>c>>x;
	    
	    ll a[r][c],b[r][c];
	    for(ll i=0;i<r;i++){
	        for(ll j=0;j<c;j++){
	            cin>>a[i][j];
	        }
	    }
	    
	    for(ll i=0;i<r;i++){
	        for(ll j=0;j<c;j++){
	            cin>>b[i][j];
	        }
	    }
	    
	    for(ll i=0;i<r;i++){
	        for(ll j=0;j<=c-x;j++){
	            ll value=a[i][j]-b[i][j];
	            
	            for(ll k=j;k<j+x;k++){
	                a[i][k] -= value;
	            }
	        }
	    }
	    
		for(ll i=0;i<c;i++){
			for(ll j=0;j<=r-x;j++){
				ll value=a[j][i]-b[j][i];
				
				for(ll k=j;k<j+x;k++){
					a[k][i] -= value;
				}
			}
		}



	    bool flag= true;
	    for(ll i=0;i<r;i++){
	        for(ll j=0;j<c;j++){
	            if(a[i][j]!=b[i][j]){
	            flag=false;
	            break;
	            }
	        }
	    }
	    
	    if(flag){
	        cout<<"Yes"<<endl;
	    } else {
	        cout<<"No"<<endl;
	    }
	    
	    
	    
	}
	
	return 0;
}
