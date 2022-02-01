#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int N,X,Y,count;
	while(t--){
		count=0;
		cin>>N>>X>>Y;
		int A[N];
		int B[N];
		for (int i = 0; i < N; ++i)
		{
			cin>>A[i];
		}
		for (int i = 0; i < N; ++i)
		{
			cin>>B[i];
		}
		for (int i = 0; i < N; ++i)
		{
			if((A[i]+X==B[i])||(A[i]+Y==B[i])){

				count++;
			}
		}
		if(count==N){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}