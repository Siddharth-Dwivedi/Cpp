#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a<(2*b)){
	        cout<<"0"<<endl;
	    }
	    else if(a==(2*b)){
	        cout<<"1"<<endl;
	    }
	    else if(a>(2*b)){
	        cout<<a/(2*b)<<endl;
	    }
	}
	return 0;
}
