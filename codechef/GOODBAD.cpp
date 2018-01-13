#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int lb=0,ub=0;
        for(int i=0;i<n;i++){
            if(isupper(s[i]))
                ub++;
            if(islower(s[i]))
                lb++;   
        }
        int c=0,b=0;
        c=lb+k;
        b=ub+k;
        
        if(k==n||(c>=n&&b>=n)){
            cout<<"both"<<endl;
        }
        else if(c>=n)
            cout<<"chef"<<endl;
        else if(b>=n)
            cout<<"brother"<<endl;
        else
            cout<<"none"<<endl;     
    }
return 0;
} 
