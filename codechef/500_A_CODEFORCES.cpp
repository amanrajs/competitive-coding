#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >>t;
    vector<int> arr(n);
    if(t==1){
        cout<<"YES";
        return 0;
    }
    int temp=1,flag=0;
    for (int i = 0; i < n-1; i++) {
        cin>>arr[i];
    }
    int i=0;
    while(temp!=t&&i<n-1){
        temp=temp+arr[i];
        i=i+arr[i];
        // cout<<temp<<" "<<i<<endl;
        if(t==temp){
            flag=1;
            break;}
//NO NED OF RPRP  PROJ
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
