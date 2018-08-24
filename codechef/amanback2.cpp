#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string temp=s;
    int index=0;
    for(int i=n-1;i>0;i--){
        int flag=0;
        int kk=i;
        for(int j=0;j<n-i;j++){
            // cout<<"hello";
            
            if(s[kk]==s[j]){
                kk++;
                continue;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            index=i;
        }
    }
    string add;
    // if(index==n-1){
    //      for(int i=n-index;i<n;i++){
    //     add=add+s[i];
    // }
    //     for(int i=1;i<k;i++){
    //     s=s+add;
    // }
    // }
    if(index==0){
    //       for(int i=n-index;i<n;i++){
    //     add=add+s[i];
    // }
        for(int i=1;i<k;i++){
            s=s+temp;
    }
    }
    else{
    for(int i=n-index;i<n;i++){
        add=add+s[i];
    }
    for(int i=1;i<k;i++){
        s=s+add;
    }}
    cout<<s<<endl;
    
}
