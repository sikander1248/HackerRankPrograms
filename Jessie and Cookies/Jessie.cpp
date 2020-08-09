#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;
int main()
{
    int n, k;
//    cout <<"Enter the number of cookies : ";
    cin >> n;
//    cout <<"Enter the minimum sweekness of cookies required : ";
    cin >> k;

//    cout <<"Enter the sweetness of cookies : ";
    priority_queue<int, vector<int>, greater<int> > v;
    for(int i = 0 ; i < n ;i++)
    {
        int ele;
        cin >> ele;
        v.push(ele);
    }

    int c = 0;
    while(v.top() < k)
    {
        int x = v.top();     v.pop();
        if(v.empty() == true)
        {
            cout << -1 << endl;
            return 0;    
        }
        int y = v.top();     v.pop();

        int newCookie = (1 * x) + (2 * y);
        v.push(newCookie);
        c++;
    }
    cout << c << endl;
}
