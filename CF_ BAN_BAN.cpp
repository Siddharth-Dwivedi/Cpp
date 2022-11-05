#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(n+1)/2<<endl;
        int i = 2;
        int j = 3*n;
        while(i<j){
            cout<<i<<" "<<j<<endl;
            i = i+3;
            j = j-3;
        }
    }
}





// Wrong Code Logic

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int k = n%2+n/2;
//         cout<<k<<endl;
//         int m = n*3;
//         int p =1,q=6;
//         for(int i=1;i<=k;i++){
//             if(m==3){
//                 cout<<p<<" "<<p+2<<endl;
//                 break;
//             }
//             else{
//                 cout<<p<<" "<<q<<endl;
//                 p = p+6;
//                 q = q+6;
//                 m= m -6;
//             }
//         }
//     }
// }
