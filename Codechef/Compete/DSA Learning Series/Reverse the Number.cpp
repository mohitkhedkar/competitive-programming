#include <bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    string s;
	    int l=0;
	    cin>>s;
	    reverse(s.begin(), s.end()); 
	    for (int i = 0; i < s.length(); ++i) {
            if (s[i] != '0') {
                l = i;
                break;
            }
        }
    for (int i = l; i < s.length(); ++i)cout << s[i];
    cout << endl;

	}
	return 0;
}
