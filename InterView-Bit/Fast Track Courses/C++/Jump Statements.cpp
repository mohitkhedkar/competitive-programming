#include<iostream>

using namespace std;

int main()  {
    int N;
    cin>>N;
    // YOUR CODE GOES HERE
    for(int i=0;i<N;i++){
        if(i%2==1){
            cout<<i<<endl;
            continue;
        }
    }
    return 0;
}
