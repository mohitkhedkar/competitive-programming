#include<bits/stdc++.h>
#define long long int
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

// Start
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int p, v, t;
		cin >> p >> v >> t;
		if (p + v + t >= 2) {
			count++;
		}
	}
	cout << count;

}