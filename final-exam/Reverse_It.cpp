#include<bits/stdc++.h>
using namespace std;

class Student {
    public: 
    string name;
    int cls;
    char section;
    int id;
};

int main(){
    int objNum;
    cin >> objNum;

    Student array[objNum];

    for(int i=0; i< objNum; i++)
     cin >> array[i].name >> array[i].cls >> array[i].section >> array[i].id;

     for(int i =0, j = objNum-1; i < j; i++,j--){
        char temp = array[i].section;
        array[i].section = array[j].section;
        array[j].section = temp;
     }

    for(int i=0; i< objNum; i++)
    cout << array[i].name << " "  << array[i].cls << " " << array[i].section << " " << array[i].id << endl;

    return 0;
}