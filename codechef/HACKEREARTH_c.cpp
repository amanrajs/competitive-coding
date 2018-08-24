
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num,k;
    cin>>num>>k;                                        // Reading input from STDIN
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    long long forw[k+1]={0};
    long long su=0;
    int ct=0;
    for(int i=0;i<k;i++){
       su=su+arr[i];
       forw[ct]=su;
       ct++;
    }
    int cnt=k-1;
    long long backw[k+1]={0};
    long long s=0;
     for(int j=num-1;j>=num-k;j--){
         s=s+arr[j];
       backw[cnt]=s;
         // cout<<backw[cnt]<<endl;
       cnt--;
    }
    long long ma=0;
    for(int i=0;i<k-1;i++){
        if(forw[i]+backw[i+1]>ma){
            ma=forw[i]+backw[i+1];
        }
    }
    long long mm=max(su,ma);
    long long mma=max(mm,s);
    cout<<mma<<endl;
    return 0;
}


