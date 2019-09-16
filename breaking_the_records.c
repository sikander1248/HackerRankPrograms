#include <stdio.h>

int main()
{
     int n;
    
    //printf("Enter the number of games played : ");
    scanf(" %d", &n);

    int     scores[n];
    //printf("Enter the scores of each game : ");
    for(int i = 0 ; i < n ; i++)
        scanf(" %d" , &scores[i]);

    int highScore = scores[0];
    int lowScore = scores[0];

    int lowRecordBroken = 0;
    int highRecordBroken = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(scores[i] < lowScore)
        {
            lowScore = scores[i];
            lowRecordBroken++;
        }
        else if(scores[i] > highScore)
        {
            highScore = scores[i];
            highRecordBroken++;
        }
    }
    
    printf("%d ",highRecordBroken);    
    printf("%d\n",lowRecordBroken);
    
}
