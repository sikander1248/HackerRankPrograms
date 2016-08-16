https://www.hackerrank.com/challenges/diagonal-difference
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int p_sum=0,s_sum=0;
    int i=0,j;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
   for(i=0;i<n;i++) {
       for(j=0;j<n;j++)
            if(i==j)
                p_sum=p_sum+a[i][j];
   }
   
   for(i=0;i<n;i++) {
    for(j=n-1;j>=0;j--) {
        if(i+j==n-1)
            s_sum=s_sum+a[i][j];
    }
  }

  printf("%d",abs(p_sum-s_sum));
  return 0;
}
