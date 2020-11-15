#include <iostream>
using namespace std;

int main() {
	// your code goes here
	bool t=1;
	while(t){
	    int a;
        cin>>a;
        if(a!=42){
            cout<<a<<endl;
        }
        else
        {
            t=0;
        }
	}
	return 0;
}
