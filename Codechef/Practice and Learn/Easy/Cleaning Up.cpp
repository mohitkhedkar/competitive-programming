#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int alreadycompleted[m];
	    
	    for(int i=0;i<m;i++){
	        cin>>alreadycompleted[i];
	    }
	    sort(alreadycompleted,alreadycompleted+m);
	    
	    int tobecompleted[n-m];
	    int k=0,j=0;
	    
	    for(int i=1;i<=n;i++){
	        if(alreadycompleted[j]!=i){
	            tobecompleted[k]=i;
	            k++;
	        } else {
	            j++;
	        }
	    }
	    
	    for(int i=0;i<n-m;i+=2){
	        cout<<tobecompleted[i]<<" ";
	    }
	    cout<<endl;
	    
	    for(int i=1;i<n-m;i+=2){
	        cout<<tobecompleted[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	}
	
	return 0;
}
