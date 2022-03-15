#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t; 
    while(t--){
        int c,d=0;
        c=d;
        string s;
        cin>>s;
        char a = s[0];
        char b = s[s.length()-1];
        for(int i=1;i<s.length();i++){
            if(s[i]!=a && s[i]!=b){
                c++;
            }
            else{
                if(c>d){
                    d=c;
                    c=0;
                }
                else{
                    c=0;
                }
            }
        }
        if(d>0){
            cout<<d<<endl;
            c=0;
            d=0;
        }
        else{
            cout<<"-1"<<endl;
            c=0;
            d=0;
        }
    }
    return 0;
}

