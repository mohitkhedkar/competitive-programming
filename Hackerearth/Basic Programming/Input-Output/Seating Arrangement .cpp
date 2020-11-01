#include<bits/stdc++.h>
using namespace std;


string Seat(int n) {
   if(n==1||n==0){
       return" WS\n";
   } else if(n==3||n==4){
       return " AS\n";
   } else{
       return " MS\n";
   }
}

int main() {
   int t,n,test;
   cin>>t;

   while(t--) {
       cin>>n;
       if((n%12)>=1&&(n%12)<=6) {
           test=n+11-(n%12-1)*2;   
           cout<<test<<Seat(test%6);
       }
       else {
           if(n%12) {
               test=n-(11-(12-(n%12))*2);  
           }
           else {
               test=n-11;
           }
           cout<<test<<Seat(test%6);   

       }
   }
}