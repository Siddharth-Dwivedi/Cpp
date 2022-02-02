#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int count=0;
    cin>>t;
    while (t--)
    {
        float a[6];
        for (int i = 0; i < 6; i++)
        {
            cin>>a[i];
        }
        
        float x,temp;
        x=(a[3]+a[4]+a[5])/2;
        for (int i = 0; i < 3; i++)
        { 
            temp=0;
                temp=a[i];
                a[i]=a[i+3];
                a[i+3]=temp;
                if((a[0]+a[1]+a[2])>x){
                    count++;
                }
                else{
                    temp=0;
                    temp=a[i];
                    a[i]=a[i+3];
                    a[i+3]=temp;
                }
        }
        if(count>0){
            cout<<"Yes"<<endl;   
            count=0;    
        }
        else{
            cout<<"No"<<endl;
        }
    }
}