#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		int a = s.size();
		if (a > 10) {
			cout << s[0] << a - 2 << s[a - 1] << "\n";
		} else {
			cout << s << "\n";
		}
	}
	return 0;
}