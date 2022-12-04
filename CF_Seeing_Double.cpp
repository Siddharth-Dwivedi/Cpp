#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int>& a,
         pair<char, int>& b)
{
    return a.second > b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    vector<pair<char,int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),cmp);
    string str="";
    for(int i=0;i<v.size();i++){
        while(v[i].second--){
            str+=v[i].first;
        }
    }
    string st = str;
    reverse(str.begin(),str.end());
    cout<<str + st<<endl;
    }
}