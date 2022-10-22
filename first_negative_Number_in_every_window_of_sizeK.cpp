#include<bits/stdc++.h>
using namespace std;
vector<int> first_negative(vector<int> &ans,vector<int>&v1,vector<int>&v,int k){
    int i=0,j=0;
    while(j<v.size()){
        if(v[j]<0) v1.push_back(v[j]);
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(v1.size()==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(v1[0]);
            }
            if(v[i]==v1[0]){
                v1.erase(v1.begin());
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {12,-1,-7,8,15,30,16,28};
    vector<int> ans;
    vector<int> v1;
    int k = 3;
    first_negative(ans,v1,nums,k);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}