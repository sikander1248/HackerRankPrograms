#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
void display(vector<int> &v)
{
    for(auto ele : v)
    {
        cout << ele <<" ";
    }
    cout << endl;
}
int main()
{
    int n, k;
//    cout <<"Enter the number of cookies : ";
    cin >> n;
//    cout <<"Enter the minimum sweekness of cookies required : ";
    cin >> k;

//    cout <<"Enter the sweetness of cookies : ";
    vector<int> v(n);
    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
    }
    //display(v);    

    sort( v.begin() , v.end() );

    //display(v);    
    int c = 0;
    while(v.size() >= 2 && v[0] < k)
    {
        c++;
        int x = v[0];
        int y = v[1];
        v.erase(v.begin() );
        v.erase(v.begin() );

        int newCookie = 1 * x + 2 * y;
        auto it = v.begin();

        while(it != v.end() )
        {
            if(*it < newCookie)
            {
                it++;
                continue;
            }
            break;
        }
        v.insert(it, newCookie);
        //display(v);
        //getchar();
    }
    if(v.size() < 2)
        cout << -1 << endl;
    else
        cout << c << endl;    
}