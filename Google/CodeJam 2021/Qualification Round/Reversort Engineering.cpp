#include<bits/stdc++.h>
#define ll long long int
using namespace std;


bool fp(vector<ll> a, int n,ll cd,ll testcase)
{
    sort(a.begin(), a.end());
    do {
    vector<ll> in=a;
    ll c,an=0;
    for(int i=0;i<=n-2;i++){
        for(int j=i;j<=n-1;j++){
            if(in[j]==i+1){
                c=j;
                break;
            }
        }
        reverse(in.begin()+i,in.begin()+c+1);
        an+=(c-i+1);
    }
    
    if(an==cd){
         cout<<"Case #"<<testcase<<": ";
         for(auto i:a){
             cout<<i<<" ";
             
         } 
         
         cout<<endl;
         
         return true;
        }


    } while (next_permutation(a.begin(), a.begin() + n));
    return false;
}

int main(){
ios_base::sync_with_stdio(0); cin.tie(0);

ll t;
cin>>t;

for(int testcase=1;testcase<=t;testcase++){
    ll n,cd;
    cin>>n>>cd;
    vector<ll> a;
    for(int i=1;i<=n;i++){
        a.push_back(i);
    }
    if(!fp(a,n,cd,testcase)){
        cout<<"Case #"<<testcase<<": IMPOSSIBLE"<<"\n";
    }
}

return 0;
}