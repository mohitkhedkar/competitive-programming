#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        
        ll c,d=0;
        cin>>c;
        
        while((pow(2,d))<=c){
            d++;
        }
        
        ll a=0,b=1,xxor;
        
        for(ll i=0;i<=pow(2,d);i++){
            xxor = a^b;
            
            if(xxor > c){
			    b++;
    		 	
    		} else if(xxor == c){
    			break;
    		} else {
    			a++;
    			b++;
    		} 
        }
        
        cout<<a*b<<endl;
    }

	
	return 0;
}
