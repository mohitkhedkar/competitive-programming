#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int array[n], difference = n-k, i = 0, flag = 1;

        for (i = 0; i < n; i++) {
            array[i] = i+1;
        }

        i = 0;
        while (difference--) {   
            array[i] -= 2*array[i];
            if (flag == 1)
                i += 2;
            else
                i -= 2;

            if (i == n) {
                flag = 0;
                i = n-1;
            }
            else if (i == n+1) {
                i = n-2;
                flag = 0;
            }

        }
        for (i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout << endl;    
    }
    return 0;
} 