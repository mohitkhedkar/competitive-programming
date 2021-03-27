#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin>>t;
    
for(int testcase=1;testcase<=t;testcase++){
    ll x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    ll cost=0;
    
    if(s.length()==1){
        cout<<"Case #"<<testcase<<": "<<0<<"\n";
        continue;
    }
    
    for(int i=0;i<=s.length()-1;i++){
        if(i==0){
            if(s[i]=='?'){
                s[i]=s[i+1];
            }
        } else if(i==s.length()-1){
            if(s[i]=='?'){
                s[i]=s[i-1];
            }
        } else if(s[i]=='?'){
            if(s[i-1]==s[i+1]){
                s[i]=s[i-1];
            } else if(s[i-1]=='C'&&s[i+1]=='J'){
                s[i]='J';
            } else if(s[i-1]=='J'&&s[i+1]=='C'){
                s[i]='C';
            }
        }
    }
    
    ll i=0;
    
    while(s[i]=='?'){
        i++;
    }
    
    for(int j=i+1;j<=s.length()-1;j++){
        if(s[j]=='?'){
            s[j]=s[j-1];
        }
    }
    for(int k=0;k<=s.length()-2;k++){
        if(s[k]=='C'&&s[k+1]=='J'){
            cost+=x;
        }
        else if(s[k]=='J'&&s[k+1]=='C')
        cost+=y;
    }



    cout<<"Case #"<<testcase<<": "<<cost<<"\n";
}

return 0;
}