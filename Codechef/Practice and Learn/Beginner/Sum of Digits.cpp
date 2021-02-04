#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,sum=0,f;
       cin>>n;
       while(n>0){
	    f=n%10;
	    sum=sum+f;
	    n=n/10;
        }
        
        cout<<sum<<endl;
        
	}
	return 0;
}
