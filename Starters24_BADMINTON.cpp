#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        if(p%2==0){
            cout<<(p/2)+1<<endl;
        }
        else if(p%2!=0){
            cout<<((p-1)/2)+1<<endl;
        }
    }
}