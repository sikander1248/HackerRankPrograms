cout<<"HELLO";
#include <iostream>
using namespace std;
int calculateArraySum(vector <int> v){
    int sum = 0;
    for(int ele : v )
    {        
        sum = sum + ele;
    } 
    return sum;
}
int main( )
{
    int numberOfElements;
    cin >> numberOfElements;
    vector <int>  v(numberOfElements);
    for(int i = 0 ; i < numberOfElements ; i++)
    {
        cin >> v[i];    
    }
    int sum = calculateArraySum(v);
    cout << sum;
}
