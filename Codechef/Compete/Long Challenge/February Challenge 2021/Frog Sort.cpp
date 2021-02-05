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
	    ll w[n],l[n];
	    
	    for(ll i =0;i<n;i++){
	        cin>>w[i];
	    }
	    
	    for(ll i =0;i<n;i++){
	        cin>>l[i];
	    }
	    
	    if(n==2){
	        if(w[0]<w[1]){
	            cout<<"0"<<endl;
	        } else if(w[0]>w[1] && l[0]==1){
	            cout<<"2"<<endl;
	        } else {
	            cout<<"1"<<endl;
	        }
	        
	    } else if(n==3){
	        ll a,b,c,ap,bp,cp;
	        ll hits=0;
	        for(int i=0;i<n;i++){
	            if(w[i]==1){
	                a=i;
	                ap=i;
	            } else if(w[i]==2){
	                b=i;
	                bp=i;
	            } else if(w[i]==3){
	                c=i;
	                cp=i;
	            }
	        	            
	        }
	        while(c<=b || c<=a || b<=a){
	            while(b<=a){
	                b+=l[bp];
	                hits++;
	                
	            } 
	            while(c<=b ||c<=a){
	                c+=l[cp];
	                hits++;
	            }
	        }
	        cout<<hits<<endl;
	        
	    } else if(n==4){
	        ll a,b,c,d,ap,bp,cp,dp;
	        ll hits=0;
	        for(int i=0;i<n;i++){
	            if(w[i]==1){
	                a=i;
	                ap=i;
	            } else if(w[i]==2){
	                b=i;
	                bp=i;
	            } else if(w[i]==3){
	                c=i;
	                cp=i;
	            } else if(w[i]==4){
	                d=i;
	                dp=i;
	                
	            }
	        	            
	        }
	        while(d<=c || d<=b || d<=a || c<=b || b<=a || c<=a){
	            while(b<=a){
	                b+=l[bp];
	                hits++;
	            } 
	            while(c<=b ||c<=a){
	                c+=l[cp];
	                hits++;
	            }
	            while(d<=c ||d<=b||d<=a){
	                d+=l[dp];
	                hits++;
	            }
	        }
	        cout<<hits<<endl;
	    }
	    
	    
	}
	
	
	return 0;
}
