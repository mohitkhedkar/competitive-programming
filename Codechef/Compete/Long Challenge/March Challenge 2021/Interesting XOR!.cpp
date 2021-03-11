#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	
    int t;
    cin>>t;
    
    while(t--){
        
        ll c,d,a,b;
        cin>>c;
        
        d=(log(c)/log(2))+1;
        
        a= (pow(2,d)-1)-pow(2,d-1);
        
        b=a^c;
        
        cout<<a*b<<endl;
        
    }

	
	return 0;
}
