#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e;
	    cin>>a>>b>>c;
	    e = max(a,b);
	    d = max(e,c);
	    cout<<d<<endl;
	}
	return 0;
}