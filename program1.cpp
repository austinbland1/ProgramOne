// Austin Bland
// Programming I
// 8-29-2018
// Purpose of Program
// Print this is your first program to the screen

#include <iostream>
using namespace std;



int main()

{
    //int
    //float
    //double
    //bool
    //void
    //char

   string name, placeoforigin, ssn;
   int age;


  cout << ("Hello, what is your name?") << endl;
  cin >> name; 

  cout << "Hello, " << name << "!" << endl;
  cout << "Where are you from " << name << "?" << endl;
  cin >> placeoforigin;
  cout << placeoforigin << "Is a nice place." << endl;
  cout << "What is your social security number, " << name << "?" << endl;
  cin >> ssn;
  cout << "Thank you, now I can rob a bank XD" << endl;

  return 0; //This means the program is DONE
}
