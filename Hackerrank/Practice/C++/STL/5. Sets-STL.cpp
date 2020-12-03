#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    set <int> s;
    for(int i = 0; i < q; i ++) {
        int t, x;
        cin >> t >> x;
        switch(t) {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                set <int> :: iterator p = s.find(x);
                if (p == s.end()) cout << "No" << endl;
                else cout << "Yes" << endl; 
                break;

        }
    }
    
    return 0;
}



