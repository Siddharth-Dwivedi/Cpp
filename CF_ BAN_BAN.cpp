#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(n+1)/2<<endl;
        int i = 2;
        int j = 3*n;
        while(i<j){
            cout<<i<<" "<<j<<endl;
            i = i+3;
            j = j-3;
        }
    }
}





