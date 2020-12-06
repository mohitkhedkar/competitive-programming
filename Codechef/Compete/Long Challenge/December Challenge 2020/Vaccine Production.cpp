#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int d1, v1, d2, v2, p;
	cin>>d1 >> v1>> d2>> v2>>p;
	int ans =0;
	int c =0;
	if(d1==d2 && d1 ==1) {
	    while(ans<p){
	        c++;
	        ans +=v1+v2;
	    }
	    
	    cout<<c<<endl;
	    
	} else {
	    c = min(d1,d2) - 1;
	    while(ans <p) {
	        if(d1>d2) {
	            ans += v2;
	            d2++;
	        } else if(d1<d2) {
	            ans+=v1;
	            d1++;
	        } else if(d1 ==d2) {
	            ans += v1+v2;
	        }
	        c++;
	    }
	    cout<<c<<endl;
	}
	
	
	return 0;
}
