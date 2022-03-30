#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

// Start
	int n;
	cin >> n;

	if (n % 2 == 0 && n > 2) {
		cout << "YES";
	} else {
		cout << "NO";
	}

}