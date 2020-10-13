#include <iostream>
using namespace std;

int main() {
	// your code goes here
    bool t=true;
    while(t){
        int a;
        cin>>a;
        if(a!=42){
            cout<<a<<endl;
        }
        else
        {
            t=false;
        }
    }
    

	return 0;
}