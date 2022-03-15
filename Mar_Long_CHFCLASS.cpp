#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
       long long n;
       cin>>n;
       int a=n/7;
       int b =n%7;
       if(b==6){
           cout<<a+1<<endl;
       }
       else{
           cout<<a<<endl;
       }
    }
    return 0;
}