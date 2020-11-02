#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

    int g,p;

    cin>>g>>p;

    int n,c1=0,c2=0;

    cin>>n;

    int a[n],i,j,r,q;

        for(i=0;i<n;i++) {

            cin>>q>>r;

            c1+=q*g + r*p;

            c2+=q*p + r*g;

        }

        if(c1<c2){ 
            cout<<c1<<endl;
        } 
        else {
            cout<<c2<<endl;
        }
    }

}