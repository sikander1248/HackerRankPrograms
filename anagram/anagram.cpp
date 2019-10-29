#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using  namespace std;
int main()
{
	string str1, str2;

	printf("Enter the first string : ");
	cin >> str1;

	printf("Enter the second string : ");
	cin >> str2;

	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	cout << str1 << endl;
	cout << str2 << endl;

	if( str1 == str2 )
		printf("Anagram \n");
	else
		printf("Not An Anagram \n");
}
