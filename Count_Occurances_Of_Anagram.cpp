#include<bits/stdc++.h>
using namespace std;

int solve(string s,string ptr,int ans,map<char,int> &m){
    int i=0,j=0;
    int n=s.size();
    int k = ptr.size();
    int count=m.size();
    while(j<n){
        if(m.find(s[j])!= m.end()){
            m[s[j]]--;
            if(m[s[j]]==0){
                count--;
                }
            }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(count==0){
                ans++;
            }
            if(m.find(s[i])!=m.end()){
                m[s[i]]++;
                if(m[s[i]]==1){
                    count++;
                }
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    string ptr;
    cin>>ptr;
    int ans=0;
    map<char,int> m;
    for(auto i:ptr){
        m[i]++;
    }
    cout<<solve(s,ptr,ans,m);
}