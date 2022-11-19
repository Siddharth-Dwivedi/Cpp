#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n,s;
       cin>>n>>s;
       vector<long long> v(n);
       unordered_map<long long,bool> mp;
       long long m = 0;
       for(int i =0;i<n;i++){
            cin>>v[i];
            mp[v[i]] = true;
            m = max(v[i],m);
       }
       long long p = 1;
       while(s>0){
            while (mp[p]==true)
            {
                p++;
            }
            s = s-p;
            mp[p]=true;
            m = max(p,m);
            p++;
       }
        if(s==0 && mp.size()==m){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}