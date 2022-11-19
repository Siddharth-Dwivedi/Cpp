#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    { 
        string s;
        cin>>s;
        char nextchar;
        bool flag = 0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='Y'){
                if(i>0){
                    if(s[i]==nextchar){
                    }
                    else{
                        cout<<"NO"<<endl;
                        flag = 1;
                        break;
                    }
                }
                nextchar = 'e';
            }
            else if(s[i]=='e'){
                if(i>0){
                    if(s[i]==nextchar){
                    }
                    else{
                        cout<<"NO"<<endl;
                        flag = 1;
                        break;
                    }
                }
                nextchar = 's';
            }
            else if(s[i]=='s'){
                if(i>0){
                    if(s[i]==nextchar){
                    }
                    else{
                        cout<<"NO"<<endl;
                        flag = 1;
                        break;
                    }
                }
                nextchar = 'Y';
            }
            else{
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==0){
        cout<<"YES"<<endl;
        }
    }
    
}