#include<bits/stdc++.h>
using namespace std;
int main(){
int t; 
cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long prod=1;
        int oddc=0,evenc=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0)
                oddc++;
            else{
                evenc++;
            }
        }
        if(oddc%2==0)
            cout<<1<<endl;
        else
            cout<<2<<endl;
        
}
return 0;
}  
