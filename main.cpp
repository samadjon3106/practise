#include <iostream>
#include <cmath>
using namespace std;
int main() {

    // char op;
    // double a, b;
    // cout<<" Please enter an operation: ";
    // cin>>op;
    // cout<<"Please enter a number1: ";
    // cin>>a;
    // cout<<"Please enter a number2: ";
    // cin>>b;
    // switch(op) {
    //     case '+':
    //         cout<<a+b<<endl;
    //         break;
    //     case '-':
    //         cout<<a-b<<endl;
    //         break;
    //     case '*':
    //         cout<<a*b<<endl;
    //         break;
    //     case '/':
    //         cout<<a/b<<endl;
    //         break;
    //     case 'p' : cout<<pow(a, b)<<endl;
    //          break;
    //     case 's' : cout<<sqrt(a)<<endl;
    //         break;
    //     default: cout<<"Invalid operation"<<endl;
    //         break;
    // }


    //ternary operator
    //
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // age>=18? cout<<"You are mature": cout<<"You are still young"<<endl;

    //usefull string methods

    // string name;
    // cout << "Enter your name: ";
    // getline(cin, name);

    // if (name.length() > 15) {
    //     cout << name << " is too long" << endl;
    // } else if (name.empty()) {
    //     cout<<"You didn't enter a name. Please enter a name"<<endl;
    // } else {
    //     cout << "Welcome " <<name<< endl;
    //     name.append("@gmail.com ");
    //     cout << "Your username is "<<name << endl;
    //}
    // name.insert(1, "@");

    // name.erase(1, 5);

  ;
    // cout<<  name.find('n')<<endl;


    //while loop
//     int age;
//     do{
//         cout << "You are still young"<<endl;;
//         cout<<"Enter your age again: ";
//         cin>>age;
//     }while (age<=18);
// cout<<"Welcome"<<endl;

    // //for
    // for (int i = 10; i >= 0; i-=2) {
    //     cout << i << endl;
    // }

    //break= stop iteration
    //continue= skip current intereation
    // for (int i =1; i <= 10; i++) {
    //     if (i==5)
    //         break;
    //             continue;
    //     cout << i << endl;
    // }

    //nested loops

   //  int rows, cols;
   //  string name;
   //  cout<<"Enter number of rows: ";
   //  cin>>rows;
   //  cout<<"Enter number of cols: ";
   //  cin>>cols;
   //  cout<<"Enter character: ";
   // cin>>name;
   //  for (int i = 1; i <rows; i++) {
   //      for (int j = 1; j <= cols; j++) {
   //          cout << name<<" ";
   //      }
   //      cout<<endl;
   //  }
   //
   //  return 0;


    //random number

    srand(time(NULL));
    int randomNumber = rand() % 25+1;
    cout << randomNumber << endl;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.