#include <bits/stdc++.h>
#define DEBUG  0
using namespace std;

int getWays(vector < int > squares, int d, int m){
    // Complete this function
    int count = 0;
    for(int j = 0 ; j < squares.size() - m + 1 ; j++)
    {
        int sum = 0;    
        for(int i = 0 + j ; i < m + j; i++){
            #if DEBUG
            cout <<squares[i] << " ";
            #endif
            sum = sum + squares[i];
        }            
        #if DEBUG
        cout << sum << endl;
        #endif
        if(sum == d)
            count++;
    }
     
    return count;
}

int main() {
    int n , ele;
    cin >> n;    
    vector<int> s;

    for(int s_i = 0; s_i < n ; s_i++){
       cin >> ele;
        s.push_back(ele);        
    }
    int d;
    int m;
    cin >> d >> m;
    int result = getWays(s, d, m);
    cout<<result<<endl;
    return 0;
}
