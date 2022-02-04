#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		float N,x;
		cin>>N;
		x=pow((0.143*N),N);
		if((x-floor(x)< 0.5)){
			cout<<floor(x)<<endl;
		}
		else{
			cout<<floor(x)+1<<endl;
		}
	}
}