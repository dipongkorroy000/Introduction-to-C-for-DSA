#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls, id, math, eng;
    char section;
};

bool compareFunction(Student left, Student right){

    if (left.eng > right.eng) return true;
    else if (left.eng == right.eng)
    {
        if (left.math > right.math) return true;
        else if (left.math == right.math) return (left.id < right.id);
        else return false;
    }
    else return false;
}

int main()
{
    int t;
    cin >> t;

    Student array[t];

    for (int i = 0; i < t; i++)
        cin >> array[i].name >> array[i].cls >> array[i].section >> array[i].id >> array[i].math >> array[i].eng;

    sort(array, array + t, compareFunction);

    for (int i = 0; i < t; i++)
        cout << array[i].name << " " << array[i].cls << " " << array[i].section << " " << array[i].id << " " << array[i].math << " " << array[i].eng << endl;

    return 0;
}