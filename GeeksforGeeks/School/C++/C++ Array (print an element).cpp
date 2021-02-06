#include <iostream>
using namespace std;

int main() {
	//code
	int t,i,n;
	cin>>t;
	int a[100];
	for(int l=0;l<t;l++) {
	    cin>>n>>i;
	    for(int k=0;k<n;k++) {
	        cin>>a[k];
	    }
	    cout<<a[i]<<endl;
	}
    
    
	return 0;
}