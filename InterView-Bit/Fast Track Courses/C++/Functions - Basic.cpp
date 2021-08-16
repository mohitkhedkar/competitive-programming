
#include<iostream>
using namespace std;


// Your Code goes here


int compute(int A, int B){
    int sum = (A*A)+(B*B);
    return sum;
};



int main()  {
    int A, B;
    cin>>A>>B;
    cout<<compute(A, B)<<endl;
    return 0;
}
