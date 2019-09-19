#include <iostream>
#include <stdio.h>
#include <set>
#include <string>
using namespace std;

set<int> s;
void findLastStoneValue(int a,int b, int n,int stoneValue,string path)
{
    if( n == 1)
    {
        //printf(" %d",stoneValue);
        //cout << path << endl;
        s.insert(stoneValue);    
        return;
    }
    findLastStoneValue(a, b, n - 1, stoneValue + a, path +" a"); //Left
    findLastStoneValue(a, b, n - 1, stoneValue + b, path + " b"); //Left
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

        findLastStoneValue(a , b , n , 0 , "");

        for(int ele : s)
            cout << ele << " ";
        cout <<endl;
        s.clear();
    }

    
}
