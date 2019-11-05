#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

void makeAnagram()
{

    char  str[10000];
    scanf(" %s" , str);
    int len = strlen(str);
    if(len % 2 != 0)
    {
        printf("-1\n");
    }
    else
    {
        int freq[26] = {0};
        for(int i = 0 ; i < len / 2 ; i++)
            freq[ str[i] - 97 ] = freq[ str[i] - 97 ] + 1;

        for(int i = len / 2 ;  i < len ; i++)
            freq[ str[i] - 97 ] = freq[ str[i] - 97 ] - 1;

        int res = 0;
        for(int i = 0 ; i < 26 ; i++)
            if(freq[i] > 0)
                res = res + freq[i];
        printf("%d\n",res);
    }
}
int main()
{
    int q;
    scanf(" %d" , &q);
    while(q-- )
    {
            makeAnagram();
    }


}
