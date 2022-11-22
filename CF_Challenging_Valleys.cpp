#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(ll i =0;i<n;i++){
            cin>>v[i];
        }
        int flag = 0;
        ll inc =0,dec=0;
        for(ll i=1;i<n;i++){
            if(v[i]>v[i-1]){
                inc++;
            }
            else if(v[i]<v[i-1]){
                dec++;
                if(inc>0){
                    flag++;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}