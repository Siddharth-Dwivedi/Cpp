#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }   
        long long j = v[0];
        sort(v.begin(),v.end());
        if(j==v[0]){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
}