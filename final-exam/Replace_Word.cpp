#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string sentence;
        cin >> sentence;
        string word;
        cin >> word;

        int length = word.size();

        int senLen = sentence.size();

        string findWord;

        for(int i =0; i< senLen; i++){
            for(int j = i; j< i + length; j++){
                findWord +=sentence[j];
            }

            if(findWord == word){
                sentence.replace(i, length, "#");
            }
            findWord.clear();
        }
        cout << sentence << endl;
    }
    

    return 0;
}