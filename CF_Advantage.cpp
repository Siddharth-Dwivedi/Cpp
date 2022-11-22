#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int fst=0;
        int sst=0;
        for(int i=0;i<v.size();i++){
            cin>>v[i];
            if(v[i]>=fst){
                int e = fst;
                fst=v[i];
                if(i>0 && e>=sst){
                    sst = e;
                }
            }
            else if(v[i]>sst){
                sst = v[i];
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==fst){
                cout<<fst-sst<<" ";
            }
            else{
                cout<<v[i]-fst<<" ";
            }
        }
        cout<<endl;
    }
}