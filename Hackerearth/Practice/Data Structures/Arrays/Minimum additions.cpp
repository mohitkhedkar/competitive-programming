#include<iostream>
#include <cmath>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
	
	int t;
	cin>>t;

	while(t--){
		ll n,k;
		cin>>n>>k;
		ll arr[n],sum=0;
		for(ll i=0;i<n;i++) {
			cin>>arr[i];
			sum +=arr[i];

		}

		if((sum/k)<=k){
			cout<<0<<endl;
		} else {
			ll result = sum/(k+1)-n+1;
			cout<<result<<endl;
		}
	}
	
	
	
	return 0;

}