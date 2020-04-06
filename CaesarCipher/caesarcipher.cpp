#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    int n;
    //cout <<"Enter the length of string : ";
    cin >> n;

    string s;
    //cout <<"Enter the string to encrypt : ";
    cin >> s;

    int k;
    //cout <<"Enter the number of rotations : ";
    cin >> k;
    k = k % 26;
    for(char c : s)
    {
        if( isalpha(c) == 0 )
            cout << c;
        else    //If it is an alphabet
        {
            unsigned char en = c + k;
            if( isupper(c) && en > 90 )
                en = en - 26;
            else if(islower(c) && en > 122)
                en = en - 26;
            cout <<en ;
        }
    }

    return 0;
}
