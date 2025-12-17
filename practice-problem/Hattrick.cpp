#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        char array[6];
        bool isHattrick = false;

        for (int i = 0; i < 6; i++)
        {
            cin >> array[i];
        };
      for(int i =0; i< 4; i++){
        if(array[i]== 'W' && array[i+1]== 'W' && array[i+2]== 'W' ){
            isHattrick= true;
        }
      }

        if(isHattrick) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}