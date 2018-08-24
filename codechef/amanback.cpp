#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,ma=0;
     for(int i=0;i<n-1;i++){
      if(2*arr[i]>=arr[i+1]){
          count++;
      }
        else{
           count=0;
        }
         if(count>ma){
             ma=count;
         }
        
    }
    cout<<max(1,ma+1)<<endl;
}
