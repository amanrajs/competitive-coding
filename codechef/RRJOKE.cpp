#include <stdio.h>
#include <stdlib.h>
 
 
int main(int argc, char *argv[])
{
    
    int t;
    int N;
    int x,y,i;
    int result;
 
    scanf("%d",&t);    
    
    while (t--){
          scanf("%d", &N);
          result = 0;
          for(i=1; i<= N; i++ ){
                scanf("%d %d",&x,&y);
                result = result^i;
                      
          }
          
          printf("%d\n", result);
    }
    return 0;
}  