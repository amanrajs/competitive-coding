#include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k,flag=0,m=0;
    string s;
        cin>>s;
        cin>>n>>k;
        string arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
        vector <int> ar(26,0);
        for(int i=0;i<s.size();i++){
             int x=s[i]-'a';
                ar[x]=1;
        }
        
        string jk[500];
        for(int i=0;i<n;i++){
                    vector <int> xy(26,0);
            string z=arr[i];
            for(int j=0;j<arr[i].size();j++){
               int y=z[j]-'a';
                xy[y]=1;
            }
            int cnt=0;
        for(int i=0;i<26;i++){
            if(ar[i]==xy[i]&&ar[i]==1){
                cnt++;
            }
        }
        if(cnt>k||cnt==k){
            flag=1;
            jk[m]=z;
            m++;
        }   
        }
        if(flag==1){
            cout<<"Yes"<<"\n";
            for(int i=0;i<m;i++)
            {
                cout<<jk[i]<<"\n";
            }
        }
        
           else
               cout<<"No"<<"\n";
         
        
    }
    return 0;
    } 
