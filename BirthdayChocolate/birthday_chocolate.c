#include <stdio.h>

int getWays( int *squares, int n, int d, int m){
    // Complete this function
    int count = 0;
    for(int j = 0 ; j < n - m + 1 ; j++)
    {
        int sum = 0;    
        for(int i = 0 + j ; i < m + j; i++){
            sum = sum + squares[i];
        }            

        if(sum == d)
            count++;
    }
     
    return count;
}

int main() {
    int n ;
    scanf(" %d", &n);    
    int s[n];

    for(int s_i = 0; s_i < n ; s_i++){
       scanf(" %d", &s[s_i]);
	   
    }
    int d;
    int m;
    scanf(" %d %d",&d, &m);
    int result = getWays(s, n, d, m);
    printf("%d\n",result);
    return 0;
}
