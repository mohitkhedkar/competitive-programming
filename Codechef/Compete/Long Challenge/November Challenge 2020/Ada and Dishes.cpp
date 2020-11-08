#include <bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,a[10000],p=0,q=0;
        cin>>n;
        for(int i=0;i<n;i++){ 
            cin>>a[i];
            
        }
        sort(a, a + n, greater<int>()); 
        p=a[1]+a[2];
        q=a[0];
            
        for(int i=3;i<n;i++){ 
            if(q>p)
            p+=a[i];
            else
            q+=a[i];
        }
        if(p>q){
            cout<<p<<"\n";
        } else {
            cout<<q<<"\n";
    	}
	}
	return 0;
}
