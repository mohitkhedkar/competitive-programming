#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
    int withdraw;
    float balance_amount;
	cin>>withdraw>>balance_amount;
	    
	   if(withdraw % 5 == 0 && (withdraw + 0.50)<balance_amount){
	        cout<< balance_amount - (withdraw + 0.50);
	   } else {
	       cout<<balance_amount;
	   }
	    
	
	return 0;
}
