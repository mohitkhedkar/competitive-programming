#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int n, q, k, qs, qi;
    cin >> n >> q;
    int **seq = new int*[n];
    for (int c = 0; c < n; c++) {
        cin >> k;
        seq[c] = new int[k];
        for (int d = 0; d < k; d++) {
            cin >> seq[c][d];
        }
    }
    for (int c = 0; c < q; c++) {
        cin >> qs >> qi;
        cout << seq[qs][qi] << endl;
    }
    return 0;
}

