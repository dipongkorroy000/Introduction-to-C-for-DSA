#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
     
        int array[x];
        for(int i =0; i< x; i++) cin >> array[i];

        char gun ='s';
        int count =0;

        for(int j =0; j<x; j++){
            if(array[j]> y && gun == 's'){
                gun = 'l';
                count++;
            }else if(array[j]<= y && gun == 'l'){
                gun ='s';
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}