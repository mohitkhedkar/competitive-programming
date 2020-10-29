#include <iostream>
using namespace std;

int main() {
	//code
	int T,n;
	
	cin>>T;
	int a[100];
	while(T--) {
	    cin>>n;
	    int sum =0;
	    for (int i=0;i<n;i++){
	        cin>>a[i];
	        sum += a[i];
	        
	    }
	    
	   
	    cout<<sum<<endl;
	}

	return 0;
}