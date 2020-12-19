#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    
	   if(x>y){
	        if((x-y)%2 == 0) {
	            cout<<1;
	        } else {
	            cout<<2;
	        }
	    } 
	    else if (x<y) {
	        if((x-y)%2 ==0) {
	            if(((x-y)/2)%2 == 0) {
	                cout<<3;
	            } else {
	                cout<<2;
	            }
	        } else {
	             cout<<1;
	        }
	         
	    } else {
	        cout<<0;
	    }
	    cout<<endl;
	    
	}
	
	
	return 0;
}
