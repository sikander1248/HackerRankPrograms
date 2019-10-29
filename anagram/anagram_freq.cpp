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

	int freq[26] = {0};

	for(char c : str1)
		freq[c - 'A'] += 1;

	for(char c : str2)
		freq[c - 'A'] -= 1;
	
	cout << endl;
	if( count(begin(freq), end(freq) , 0) == 26)
		cout <<"Anagram \n";
	else
		cout <<"Not An Anagram \n";
}
