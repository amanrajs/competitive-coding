#include <iostream>
using namespace std;
 
int max(int a, int b) { return (a > b)? a : b; }
 
int max(int a, int b, int c) { return max(max(a, b), c); }
 
// Find the maximum possible sum in arr[] auch that arr[m] is part of it
int maxCrossingSum(int arr[],int sleep[], int l, int m, int h)
{
    // Include elements on left of mid.
    int sum = 0;
    int left_sum =0;
    for (int i = m; i >= l; i--)
    {
        if(sleep[i]==0)
        sum = sum + arr[i];
        if (sum > left_sum)
          left_sum = sum;
    }
 
    // Include elements on right of mid
    sum = 0;
    int right_sum = 0;
    
    for (int i = m+1; i <= h; i++)
    {
        if(sleep[i]==0)
        sum = sum + arr[i];
        if (sum > right_sum)
          right_sum = sum;
    }
 
    // Return sum of elements on left and right of mid
    return left_sum + right_sum;
}
 
// Returns sum of maxium sum subarray in aa[l..h]
int maxSubArraySum(int arr[],int sleep [],int l, int h)
{
   // Base Case: Only one element
   if (l == h)
     return arr[l];
 
   // Find middle point
   int m = (l + h)/2;
 
   /* Return maximum of following three possible cases
      a) Maximum subarray sum in left half
      b) Maximum subarray sum in right half
      c) Maximum subarray sum such that the subarray crosses the midpoint */
   return max(maxSubArraySum(arr,sleep, l, m),
              maxSubArraySum(arr,sleep, m+1, h),
              maxCrossingSum(arr,sleep,l, m, h));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n,k;
        cin>>n>>k;
        int thm[n],sleep[n];
    for(int i=0;i<n;i++){
      cin>>thm[i];
    }
     for(int i=0;i<n;i++){
         cin>>sleep[i];
    }
    long long sum1=0;
     for(int i=0;i<n;i++){
         if(sleep[i]!=0)
             sum1=sum1+thm[i];
    }
    int max_sum = maxSubArraySum(thm,sleep, 0, n-1);
    cout<<max_sum;
    cout<<sum1+max_sum;
    
}
    
    
    
    
    
    
    
