#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    //printf("Enter the order of map : ");
    scanf(" %d" , &n);
    char map[n][n + 1];

    for(int i = 0 ; i < n ; i++)
        scanf(" %s",map[i]);

    for(int i = 0 ; i < n  ; i++ )
    {
        for(int j = 0 ; j < n  ; j++)
        {
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1)
                printf("%c",map[i][j]);
            else{
            int key = map[i][j];
            int up = map[i - 1][j];
            int down = map[i + 1][j];
            int left = map[i][j - 1];
            int right = map[i][j + 1];
            if(key > up && key > down &&
               key > left && key > right)
                printf("X");
            else
                printf("%c",map[i][j]);
            }
        }
        printf("\n");
    }

}
