#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d;
	cin>>a>>b;
	c=a-b;
	d = c%10;
	if(d==9) {
	cout<<c-1<<endl;
	} else {
	cout<< c+1<<endl;
	}
	
	return 0;
}
