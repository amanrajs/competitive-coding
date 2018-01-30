#include<bits/stdc++.h>
using namespace std;
int main(){
int t; 
cin>>t;
    while(t--){
        long long k,d0,d1;
        cin>>k>>d0>>d1;
        int arr[7]={0};
        arr[0]=d0;
        arr[1]=d1;
        int sum=(d0+d1)%10;
        for(int i=2;i<7;i++){
            arr[i]=sum;
            sum=(sum+arr[i])%10;
        }
        long long imsum=0;
        for(int i=3;i<7;i++){
            imsum=imsum+arr[i];
        }
        long long x=(k-3)/4;
        long long y=(k-3)%4;
        long long ysum=0;
        if(y==1){
            ysum=arr[3];
        }
        else if(y==2){
            ysum=arr[3]+arr[4];
        }
        else if(y==3){
            ysum=arr[3]+arr[4]+arr[5];
        }
        else{
            ysum=0;
        }
          long long totalsum=-1;
        totalsum=d0+d1+arr[2]+(x*imsum)+ysum;
        if(totalsum%3==0){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;      
}
return 0;
}  
