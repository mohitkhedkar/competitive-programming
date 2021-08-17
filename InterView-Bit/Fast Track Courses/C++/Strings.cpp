
#include<iostream>
#include<string>
using namespace std;


int main()  {
    string A, B;
    cin>>A>>B;
    // YOUR CODE GOES HERE
    int lenA = A.size();
    int lenB = B.size();
    cout<<lenA<<" "<<lenB<<endl;
    string C=A+B;
    cout<<C<<endl;
    int temp;
    temp=B[0];
    B[0] = A[0];
    A[0] = temp;
    cout<<A<<" "<<B<<endl;

    return 0;
}