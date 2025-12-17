#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >>y;
        int array[x];
        for(int i =0; i< x; i++) cin >> array[i];

        int sum =0;
        for(int i =0; i< x; i++) sum += array[i];

        cout << ceil((double)sum/y) << endl;

    }
    
    return 0;
}