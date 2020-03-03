#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    //cout <<"Enter the number of socks : ";
    cin >> n;
    vector<int> sockIds(n);
    for(int i = 0 ; i < n ; i++)
        cin >> sockIds[i];

    map<int , int> sockFreq;
    for(int key : sockIds)
        sockFreq[ key ] =  sockFreq[ key ] + 1;

    auto it = sockFreq.begin();
    int no_pairs = 0;
    while(it != sockFreq.end())
    {
       // cout << it->first <<" : " <<it->second << endl;
        no_pairs += it->second / 2;
        it++;
    }
    cout << no_pairs << endl;

}
