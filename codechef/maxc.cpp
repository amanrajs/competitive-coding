#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],arr[n][n]={0};
        for(int i=0;i<n;i++){
            a[n]={0};
            for(int j=0;j<n;j++){
                cin>>a[j];
            }
            sort(a,a+n);
            for(int k=0;k<n;k++){
                arr[i][k]=a[k];
            }
        }
        int prev=arr[n-1][n-1];
        long sum=prev;
        int sig=0;
        for(int i=n-2;i>=0;i--){
            int flag=0;
            for(int j=n-1;j>=0;j--){
                if(arr[i][j]<prev){
                    sum=sum+arr[i][j];
                prev=arr[i][j];
                flag=1;
                break;}
            }
            if(flag==0){
                sig=1;
                break;
            }
        }
        if(sig==0)
        cout<<sum<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
} 
