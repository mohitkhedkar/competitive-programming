#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum += a[i];
    }

    cout<<sum<<endl;

    return 0;
}
