#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];        
    }
    int energy = 100;
    int currentCloud = 0;
    do{
        currentCloud = (currentCloud + k) % n;
        energy--;
        if(v[currentCloud] == 1)
            energy = energy - 2;
    }while(currentCloud != 0);
    cout << energy << endl;
}
