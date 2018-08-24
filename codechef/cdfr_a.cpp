#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=0;
    int cnt1=0,cnt=0;
    if(n==1){
        if(s[0]=='0')
            cout<<"No";
        else
            cout<<"Yes";
    }
    else{
   if(s[0]=='0'&&s[1]=='0'){
       f=1;
       cout<<"No";
       return 0;
   }
    if(s[n-1]=='0'&&s[n-2]=='0'){
         f=1;
       cout<<"No";
       return 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt++;
          cnt1=0;}
        if(s[i]=='1'){
        cnt=0;
            cnt1++;
        }
        if(cnt1==2||cnt==3){
            cout<<"No";
            f=1;
            break;
        }
    }
    
    if(f==0)
        cout<<"Yes";
    }
    
    return 0;
}
