https://www.hackerrank.com/challenges/diagonal-difference
#include <stdio.h>
#include <stdlib.h>


void readMatrix(int a[][10],int n){
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    } 
}
int calculatePrimaryDiagonalSum(int a[][10] , int n )
    int p_sum = 0;
    for(i=0;i<n;i++) {
       for(j=0;j<n;j++)
            if(i==j)
                p_sum=p_sum+a[i][j];
   }
   return p_sum;
}

int main(){
    int p_sum=0,s_sum=0;
    int i=0,j;
    int n;
    scanf("%d",&n);
    int a[10][10];
   
   readMatrix(a , n);
   
   p_sum = calculatePrimaryDiagonalSum(a , n);
       
   
   for(i=0;i<n;i++) {
    for(j=n-1;j>=0;j--) {
        if(i+j==n-1)
            s_sum=s_sum+a[i][j];
    }
  }

  printf("%d",abs(p_sum-s_sum));
  return 0;
}
