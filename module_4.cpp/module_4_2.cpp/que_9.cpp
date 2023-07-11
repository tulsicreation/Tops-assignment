/*
create a class person having members name and age. Derive a class student having member percentage
Derive another class teacher having member salary. Write necessary member function to initialize,
read and write data. Write also Main function (Multiple Inheritance)
*/

#include <iostream>

using namespace std;

class person
{
public:
    string person_name;
    int person_age;

    void info()
    {
        cout << "enter a person name : ";
        cin >> person_name;

        cout << "enter a person age : ";
        cin >> person_age;
    }
};

class studeant
{
public:
    int total_marks;
    int subject_no;
    int percentage;

    void percentage1()
    {

        cout << "enter a total marks :";
        cin >> total_marks;

        cout << "enter a total subject :";
        cin >> subject_no;

        percentage = total_marks / subject_no;

        cout << "your percantage is : " << percentage << endl;
    }
};

class teacher : public person, public studeant
{

public:
    int salary;
    void salary1()
    {
        cout << "teacher salary is : ";
        cin >> salary;
    }
    void dispaly()
    {
        cout << "person name is : " << person_name << endl;
        cout << "person age is : " << person_age << endl;
        cout << "parcntage : " << percentage << endl;
    }
};

int main()
{

    teacher obj;
    obj.info();
    obj.percentage1();
    obj.salary1();
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
    obj.dispaly();
}
