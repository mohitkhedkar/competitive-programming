#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int t;
        cin>>t;
        while(t--) {
            int n;
            cin>>n;
            int a[n], ans[n];
    
            for (int i = 0; i < n; i++)
                cin>>a[i];
            
            int s;
            for (int i = 0; i < n; i++) {
                s = 0;
                for (int j = i; j < n; j++) {
                    if (a[j] == a[i])   
                        continue;
                    else
                        s++;
                }
                ans[i] = s;
            }
            for (int i = 0; i < n; i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }
	return 0;
}
