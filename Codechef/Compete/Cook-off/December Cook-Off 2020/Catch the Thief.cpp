#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int x, y, k, n;
	    cin>>x>>y>>k>>n;
	    bool equal=0;
	    
	    if(x>y) {
	        swap(x,y);
	    }
	    
	    while(y>0&&x<n) {
		    x+=k;
	    	y-=k;
	    	if(x==y) {
	    		equal=1;
	    		break;
	    	}
	    }
	cout << (equal?"Yes":"No") << "\n";
	    
	   
	}
	
	return 0;
}
