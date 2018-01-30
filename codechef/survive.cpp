#include<bits/stdc++.h>
using namespace std;
int main(){
int t; 
cin>>t;
    while(t--){
        int n,k,s,sum=0,count=0;
        cin>>n>>k>>s;
        int reqd=0,sunday=0,possible=0;
        reqd=k*s;
        sunday=s/7;
        possible=(s-sunday)*n;
        if(possible<reqd){
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<=possible;i=i+n){
                if(i>=reqd){
                    break;
                }
                count++;
            }
            cout<<count<<endl;  
        }
    
}
return 0;
}  
