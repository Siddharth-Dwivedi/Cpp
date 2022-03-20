#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int d=0;
        int n;
        
        cin>>n;
        if(n%2==0){
            n=n/10;
            while(n>0){
                int r = n%10;
              if(r%2==0){
                 d++;
              }  
              n=n/10;
            }
            
           }
           else if(n%2!=0){
               n=n/10;
            while(n>0){
                int r = n%10;
              if(r%2!=0){
                  d++;
              }  
              n=n/10;
            }
           
        }
        if(d>0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
