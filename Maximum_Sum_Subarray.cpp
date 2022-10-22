#include<bits/stdc++.h>
using namespace std;

int max_sum(vector<int>& nums,int k){
    int sum =0;
    int mx = INT_MIN;
    int i=0,j=0;
    while(j<nums.size()){
        sum+=nums[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            mx = max(sum,mx);
            sum-=nums[i];
            i++;
            j++;
        }
    }
    return mx;
}

int main(){
    vector<int>v = {2,2,4,5,-4,6,9,9};
    int k = 3;
    cout<<max_sum(v,k);
    return 0;
}