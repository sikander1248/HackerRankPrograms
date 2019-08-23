
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
 //   cout << "Enter the age of niece : ";
    cin >> n;
    
    int height[n];
 //   cout <<"Enter the height of each candle : ";
    for(int i = 0; i < n; i++){
       cin >> height[i];
    }
    //Find the tallest candle          
    int *pLarge = max_element( height , height + n);
 //   cout <<"Height of largest candle is " << *pLarge << endl;
    
    //Count Number of candles matching the height of tallest candle
    int candlesBlown = count(height , height + n , *pLarge);
 //   cout<<"Number of candles blow = ";
    cout << candlesBlown <<endl;
    return 0;
}
