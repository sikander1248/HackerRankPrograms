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

    char result[n][n + 1];

    memcpy(result, map, sizeof(map));

    for(int i = 1 ; i < n - 1 ; i++ )
        for(int j = 1 ; j < n - 1 ; j++)
        {
            int key = map[i][j];
            int up = map[i - 1][j];
            int down = map[i + 1][j];
            int left = map[i][j - 1];
            int right = map[i][j + 1];
            if(key > up && key > down &&
               key > left && key > right)
                result[i][j] = 'X';
        }
     for(int i = 0 ; i < n ; i++)
        printf("%s\n",result[i]);
}
