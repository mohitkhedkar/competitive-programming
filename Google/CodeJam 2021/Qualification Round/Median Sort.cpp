#include<bits/stdc++.h>
using namespace std;

int main() {
  int t, n, q;
  cin>>t>>n>>q;

  while(t--) {
    vector<int> arr;
    cout<<"1 2 3"<<endl;

    int size = 3;
    int p;
    cin>>p;

    if(p == 2) {
      arr.push_back(1);
      arr.push_back(2);
      arr.push_back(3);
    }
    else if(p == 3) {
      arr.push_back(1);
      arr.push_back(3);
      arr.push_back(2);
    }
    else {
      arr.push_back(2);
      arr.push_back(1);
      arr.push_back(3);
    }
    for(int i = 4; i<=n; i++) {
      int beg = 0;
      int end = size - 1;

      while(beg<end) {
        int mid = beg + (end - beg)/2;
        cout<<arr[mid]<<" "<<arr[mid+1]<<" "<<i<<endl;
        cin>>p;

        if(p == arr[mid]) {
          end = mid;
        }
        else if(p == arr[mid+1]) {
          beg = mid+1;
        }
        else {
          arr.insert(arr.begin() + mid + 1, i);
          size++;
          break;
        }
      }
      if(size != i) {
        if(beg == 0){
          arr.insert(arr.begin(), i);
        }
        else {
          arr.push_back(i);
        }
        size++;
      }
    }
    for(auto itr: arr) {
      cout<<itr<<" ";
    }
    cout<<endl;
    cin>>p;
    if(p == -1) {
      break;
    }
  }
}