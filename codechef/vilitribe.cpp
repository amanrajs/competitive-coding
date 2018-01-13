#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cal=0,cbl=0,car=0,cbr=0,cA=0,cB=0;
        long long n=s.size();
        for(int i=0;i<n;i++){
           cal=0;cbl=0;car=0;cbr=0;
            if(s[i]=='A'){
                cA++;
            }
            else if(s[i]=='B'){
                cB++;}
             else{
                for(int j=i-1;j>=0;j--){
                    if(s[j]=='A'){
                        cal=1;
                        break;
                    }
                    if(s[j]=='B'){
                        cbl=1;
                        break;
                    }
                }
                for(int j=i+1;j<n;j++){
                    if(s[j]=='A'){
                        car=1;
                        break;
                    }
                    if(s[j]=='B'){
                        cbr=1;
                        break;
                    }
                }
                if(car==1&&cal==1){
                    cA++;  
                }
                 if(cbr==1&&cbl==1){
                    cB++;
                   
                }
                
                
                
            }
            
        }
        cout<<cA<<" "<<cB<<endl;
    }
    return 0;
}