#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
};

bool compareFunction(Student left, Student right){

    return left.math+ left.eng == right.math + right.eng ? left.id < right.id : left.math+ left.eng > right.math + right.eng;

    // if(left.math+ left.eng > right.math + right.eng) return true;
    // else if(left.math+ left.eng == right.math + right.eng) return (left.id < right.id) ? true : false;
    // else return false;
}

int main()
{
    int objNum;
    cin >> objNum;

    Student array[objNum];

    for (int i = 0; i < objNum; i++)
        cin >> array[i].name >> array[i].cls >> array[i].section >> array[i].id >> array[i].math >> array[i].eng;

    sort(array, array+objNum, compareFunction);

    for (int i = 0; i < objNum; i++)
        cout << array[i].name << " " << array[i].cls << " " << array[i].section << " " << array[i].id << " " << array[i].math << " " << array[i].eng << endl;

    return 0;
}