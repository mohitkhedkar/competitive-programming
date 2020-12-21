#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while (t--) {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count_positive=0;

	for(int i=0; i<n; ++i)
		if(s[i]=='1')
			count_positive++;

	double percentage=(double)(count_positive+(120-n))/120;
	cout << (percentage*100>=75?"YES":"NO") << "\n";
	
	    
	}

	
	return 0;
}
