#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string a;
	    string b;
		cin>>a;
		cin>>b;
		for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                cout<<"G";
            }
            else{
                cout<<"B";
            }
        }
        cout<<endl;
        
	}
	return 0;
}
