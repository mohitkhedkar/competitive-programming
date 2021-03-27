#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
 ios_base::sync_with_stdio(0); cin.tie(0);
 ll t;
 cin>>t;
 
for(int testcase=1;testcase<=t;testcase++){
    ll n;
    cin>>n;
    ll x;
    vector<ll> a;
    for(int i=0;i<=n-1;i++){
        cin>>x;
        a.push_back(x);

    }

    map<ll,ll> m;

    for(int i=0;i<=n-1;i++){
        m[a[i]]=i+1;
    }
    ll c,cost=0;

    for(int i=0;i<=n-2;i++){
        for(int j=i;j<=n-1;j++){
            if(a[j]==i+1){
                c=j;
                break;
            }
        }
        reverse(a.begin()+i,a.begin()+c+1);
        cost+=(c-i+1);
    }
    cout<<"Case #"<<testcase<<": "<<cost<<"\n";
}

return 0;
}