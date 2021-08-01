#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	while(n--){
		double w,h;
		cin>>w>>h;

		double ratio1 = ((double)w)/((double)h);
		double ratio2 = ((double)h)/((double)w);
		if((ratio1 >= 1.6 && ratio1 <=1.7) ||  (ratio2 >= 1.6 && ratio2 <=1.7)){
			count++;
		}
		
	}
	cout<<count<<endl;

	return 0;
}