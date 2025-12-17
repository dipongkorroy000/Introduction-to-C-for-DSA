#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x, y;
        cin >> n >> x >> y;
        int sum =0;
        for(int i =0; i < n; i++){
            int a;
            cin >> a;
            if(a * x <= y){
                sum+=a*x;
            }
            else sum+=y;
            // cout << a << " ";
        }

        // cout << endl;
        cout << sum << endl;
        
    }
    
    return 0;
}