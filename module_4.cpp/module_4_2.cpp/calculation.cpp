// WAP to create simple calculator using class
#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b, answer;
    
     

    void getdata()
    {
        cout << "Enter Value of a and b: ";
        cin >> a >> b;
    }

    void addition()
    {
        answer = a + b;
        cout << "Addition= " << answer<<endl;
    }
     
     int answer2;
     void subsraction()
    {
       answer = a - b;
       cout << "subsraction=" << answer2<<endl;
    }
    int answer3;
    void multiply()
    {
       answer= a*b;
       cout << "multiply=" << answer3<<endl;

    }
    float answer4;
    void divison()
    {
    answer = a/b;
    cout << "divison=" << answer4<<endl;

    }

};
int main()
{
    calculation c1;
    c1.getdata();
    c1.addition();
    c1.multiply();
    c1.subsraction();
    c1.divison();
    return 0;
}