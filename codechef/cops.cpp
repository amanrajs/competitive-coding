   #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;
        cin>>t;
        while(t--){
            vector <int> c(100,0);
            int m,x,y;
            cin>>m>>x>>y;
            int a[m];
            for(int i=0;i<m;i++){
                int temp;
                cin>>temp;
                a[i]=temp;
                c[temp]=1;
            }
            int s=x*y;
            for(int i=0;i<m;i++){
                int temp=a[i];
                    for(int j=temp-1;j>=temp-s&&j>0;j--){
                        c[j]=1;
                    }
                    for(int j=temp+1;j<=temp+s && j<=100;j++){
                        c[j]=1;
                    }
            }
            int count=0;
            for(int i=1;i<=100;i++){
                if(c[i]!=1){
                    count++;
                }
            }
            cout<<count<<"\n";
        }
    
   
    return 0;
    } 