#include <iostream>
using namespace std;

int main() {

	int n,m;
	cin>>n>>m;

	int arr[n],position=-1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		if(m == arr[i]){
			position=i+1;
		} 
	}
	
		cout<<position<<endl;
	

	return 0;
}