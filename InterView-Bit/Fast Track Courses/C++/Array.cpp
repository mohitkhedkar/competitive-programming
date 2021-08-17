/*
#include<iostream>
using namespace std;
*/

void reverseArray(int arr[], int N){
    // Your code goes here
    for(int i=0, j=N-1;i<N/2;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}


/*
int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/