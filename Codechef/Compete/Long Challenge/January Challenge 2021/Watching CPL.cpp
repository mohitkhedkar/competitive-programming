#include <bits/stdc++.h>
using namespace std;

int calculate(int h[],int n,int k){
    
    if(n==1){
        return -1;
    }
    int dp[n+1][16002];
    
    memset(dp,0,sizeof dp);
    
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    int sum_till_now = 0;
    for(int i=1;i<=n;i++){
        sum_till_now += h[i-1];
        
        for(int j=1;j<=sum_till_now;j++){
            dp[i][j] = dp[i-1][j];
            if(dp[i-1][j-h[i-1]]==1){
                dp[i][j] = 1;
            }
        }
        if(sum_till_now>=(2+k)){
            for(int j=k;j<=(sum_till_now-k);j++){
                if(dp[i][j]==1){
                    return i;
                }
            }
        }
    }
    return -1;
}
        
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n,k;
        cin>>n>>k;
        int h[n];
        int total_sum = 0;
        for(int i=0;i<n;i++){
            cin>>h[i];
            total_sum += h[i];
        }
        if(total_sum<(2+k)){
            cout<<"-1"<<endl;
            continue;
        }
        sort(h,h+n,greater<int>());
       
        
         if(n>2 && h[0]>=k && h[1]>=k){
            cout<<"2"<<endl;
            continue;
        }
        
        else if(n>2 && h[0]>=k && h[1]<k){
            int summ = 0;
            int flag = 0;
            for(int i=1;i<n;i++){
                summ += h[i];
                if(summ>=k){
                    cout<<i+1<<endl;
                    flag = 1;
                    break;
                }
            }
            if(flag!=1){
                cout<<"-1"<<endl;
                continue;
            }
        }
        else
        {
            cout<<calculate(h,n,k)<<endl;
        }
	    
	    
	}
	
	
	return 0;
}
