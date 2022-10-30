//STL SOLUTION

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int miny=INT_MIN;
    long long sum=0;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        int x = min(v[i].first,v[i].second);
        int y = max(v[i].first,v[i].second);
        sum+=x;
        if(y>miny) miny=y;
    }
    cout<<(sum+miny)*2<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

// Array Solution

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 


// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n][2];
//         ll ans=0;
//         for(int i=0; i<n; i++){
//             cin>>a[i][0]>>a[i][1];
//             if(a[i][1]<a[i][0])
//             swap(a[i][1],a[i][0]);
//             ans+=a[i][0];
//         }
//         ans=2*ans;
//         int mx=a[0][1];
//         for(int i=1; i<n; i++){
//             mx = max(mx, a[i][1]);
//         }
//         cout<<ans+2*mx<<endl;
//     }
// 	return 0;
// }




