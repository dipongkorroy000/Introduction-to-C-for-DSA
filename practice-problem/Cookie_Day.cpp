#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int array[n];
        for (int i = 0; i < n; i++)
            cin >> array[i];

        int minValue = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (array[i] >= x)
                minValue = min(array[i] % x, minValue);
        }

        if(minValue == INT_MAX) cout << -1 << endl;

        else cout << minValue << endl;
    }

    return 0;
}