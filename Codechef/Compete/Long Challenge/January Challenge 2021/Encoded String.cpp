#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char str[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
        
        int n,mid;
        cin>>n;
        
        string s;
        cin>>s;
        
        string ans="";
        
        for(long int j=0;j<s.length();j+=4){
            long int l=0,r=15;
            for(long int i=j;i<j+4;i++){
                mid=l+(r-l)/2;
                if(s[i]=='0'){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
            ans.push_back(str[l]);
        }
        cout<<ans<<endl;
    }

    return 0;
}