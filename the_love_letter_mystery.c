
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int theLoveLetterMystery(char *s)
{
    int i = 0;
    int j = strlen(s) - 1;    
    int steps = 0;

    while( i < j)
    {
        steps = steps + abs(s[i] - s[j]);
        i++;
        j--;
    }
    return steps;
}


int main()
{
    int t;
    scanf(" %d", &t);
    while(t--)
    {
        char s[10000] = "";
        scanf("%s",s);
        int result = theLoveLetterMystery(s);

        printf("%d\n",result);
    }
}
