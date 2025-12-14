#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    string word = "Jessica";

    stringstream words(sentence);

    string findWord;
    while (words >> findWord)
    {
        if (findWord == word)
        {
            cout << "YES";
            break;
        }
    }
    if(findWord != word) cout << "NO";

    return 0;
}