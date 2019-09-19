
#include <iostream>
#include <stdio.h>
#include <set>
#include <string>
using namespace std;


set<int> findLastStoneValue(int a,int b, int n)
{
    set<int> s;

    for(int i = 0 ; i < n ; i++)
    {
        s.insert( (b * i) + (a * (n - i - 1) ));
    }    
    return s;
}
int main()
{
    int t;
    //printf("Enter the number of test cases : ");
    scanf(" %d",&t);

    while(t--)
    {
        int n, a, b;
        //printf("Enter the number of stones : ");
        scanf(" %d",&n);
        //printf("Enter the value of a and b : ");
        scanf(" %d %d",&a, &b);

        set<int> s = findLastStoneValue(a , b , n );

        for(int ele : s)
            cout << ele << " ";
        cout <<endl;
    }

    
}
