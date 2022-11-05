#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        long long sumn=0,sump=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0){
                sumn = sumn + (-1) * v[i];
            }
            else{
                sump = sump + v[i];
            }
        }
        cout<<abs(sumn-sump)<<endl;
    }
}


