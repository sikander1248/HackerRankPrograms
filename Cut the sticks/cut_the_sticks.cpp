#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
	sort(arr.begin() , arr.end() , [](int a,int b){return a > b;});

	for( ; arr.size() != 0 ; )
	{
		cout << arr.size() << endl;
		vector<int>::iterator it = min_element(arr.begin() , arr.end());
		for(int &x : arr)
			x -= *it;
		arr.erase(it , arr.end());
	}	
    return 0;
}
