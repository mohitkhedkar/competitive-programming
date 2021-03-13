#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n],count=0,flag=0;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    sort(a,a+n);
	    
	    for(ll i=0;i<n;i++){
	        if(a[i]>i+1){
	            cout<<"Second"<<endl;
	            flag=1;
	            break;
	        } 
	            count += abs(i+1-a[i]);
	             
	        
	    }
	    
	    if(flag==0){
	        if(count%2==0){
	            cout<<"Second"<<endl;
	        } else {
	            cout<<"First"<<endl;
	        }
	    }
	    
	    
	}
	
	return 0;
}
