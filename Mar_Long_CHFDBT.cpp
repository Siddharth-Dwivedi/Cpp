#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
        }
        else if(n%2!=0){
            cout<<(n/2)+1<<endl;
        }
    }
    return 0;
}
