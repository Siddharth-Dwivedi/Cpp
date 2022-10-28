#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int n,vector<pair<int,int>> &vp){
    for(int i =0;i<n;i+=2){
        if(v[i]==v[i+1]){
            vp.push_back({i+1,i+2});
        }
        else{
            vp.push_back({i+1,i+1});
            vp.push_back({i+2,i+2});
        }
    }
    cout<<vp.size()<<endl;
    for(auto i:vp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }  
        vector<pair<int,int>> vp;
        if(n&1) {cout<<"-1"<<endl;}
        else
        solve(v,n,vp);
    }
    return 0;
}