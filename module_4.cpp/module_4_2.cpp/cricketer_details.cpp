/*   Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include <iostream>
#include <string>

using namespace std;

class cricketer
{
public:
  string batsman_name;
  int totalruns;
  int total_match_played;
  int average_runs;
  int best_perfomance;

  void information()

  {
    cout << "enter a batsman total runs : " << endl;
    cin >> totalruns;

    cout << "enter a batsman total_match_played: " << endl;
    cin >> total_match_played;

    cout << "enter a batsman best_perfomance; : " << endl;
    cin >> best_perfomance;

    cout << "enter a batsman_name : " << endl;
    cin >> batsman_name;
  }
};

class batsman1 : public cricketer

{
public:
  batsman1 average()
  {
    average_runs = totalruns / total_match_played;

    cout << "_____________________________________________________________" << endl;
  }
  batsman1 display1()
  {

    cout << "batsman best performance is : " << best_perfomance << endl;
    cout << "batsman average is : " << average_runs << endl;
    cout << "batsman name is : " << batsman_name << endl;
  }
};

int main()
{

  batsman1 obj;
  obj.information();
  obj.average();
  obj.display1();
}