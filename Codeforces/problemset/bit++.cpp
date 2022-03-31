#include<bits/stdc++.h>
#define long long int
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

// Start
	int n, x = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s[0] == '+')
			x++;
		if (s[0] == '-')
			x--;
		if (s[2] == '+')
			x++;
		if (s[2] == '-')
			x--;
	}

	cout << x;

}