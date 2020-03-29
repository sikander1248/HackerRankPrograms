#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string str;
	cin >> str;

	map<char, int> freq;

	for(auto c : str)
		freq[c] = freq[c] + 1;

	int countOdd = 0;
	for(auto ele : freq)
	{
		cout << ele.first <<" "<<ele.second<<endl;
		if(ele.second % 2 != 0)
			countOdd++;
	}
	if(countOdd > 1)
		cout << "NO";
	else
		cout <<"YES";
	
	return 0;
}
