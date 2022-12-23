#include<bits/stdc++.h>
using namespace std;
int main(){
        long long n;
        cin>>n;
        long long r=0;
        long long c=0;
        long long l = n;
        long long count=0;
        while(l>0){
            l=l/10;
            count++;
        }
        while(n>0){
            int k =n%10;
            if(k>4){
                if(count!=1 || k!=9){
                    // cout<<k<<" ";
                k = 9-k;
                }
            }
            r = r + k*pow(10,c);
            c++;
            n = n/10;
            count--;
        }
        cout<<r;
}
