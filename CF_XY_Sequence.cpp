#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long sum;
	cin>>t;
	while(t--){
	long long n,B,x,y;
	cin>>n>>B>>x>>y;
	int a[n];
	a[0]=0;
	long long sum=0;
	for(int i=1;i<=n;i++){
		int p = a[i-1]+x;
		int q = a[i-1]-y;
		if(p<=B && q>B){
			a[i]=p;
		}
		else if(p>B && q<=B){
			a[i]=q;
		}
		else if(p<=B && q<=B){
			if(B-p<B-q){
				a[i]=p;
			}
			else{
				a[i]=q;
			}
		}
		else if(p>B && q>B){
			continue;
		}
		sum = a[i]+sum;
	}
	cout<<sum<<"\n";
	}
}