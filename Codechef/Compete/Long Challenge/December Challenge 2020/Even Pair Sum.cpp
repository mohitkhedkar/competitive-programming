#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    long long a,b,i=1,j=1;
	    cin>>a>>b;
	    long ans = (a/2)*(b/2);
	    long f_ans = ans +=((a+1)/2) * ((b+1)/2);
	    cout<<f_ans<<endl;
	}
	
	
	return 0;
}
