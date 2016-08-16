
#include <iostream>

using namespace std;

int main( )
{
    int numberOfElements;

    cin >> numberOfElements;

    int arr[numberOfElements];
    
    for(int i = 0 ; i < numberOfElements ; i++)
    {
        cin >> arr[i];    
    }
    int sum = 0;
    for(int i = 0 ; i < numberOfElements ; i++)
    {        
        sum = sum + arr[i];
    } 
    
    cout << sum;
}
