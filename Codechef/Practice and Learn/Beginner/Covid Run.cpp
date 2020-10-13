#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++) {
	    int n,k,x,y,count=0;
	    cin>>n>>k>>x>>y;
	    
	    if(y>n){
	        cout<<"NO"<<endl;
	    }
	    else {
	        for(int i=0;i<=n;i++){
	            if((x+k*i)%n ==y){
	                cout<<"YES"<<endl;
	                count=1;
	                break;
	            }
	        }
	        if(count ==0 ){
	            cout<<"NO"<<endl;
	        }
	    }
	}
	
	
	return 0;
}
