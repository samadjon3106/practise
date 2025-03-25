#include <iostream>
using namespace std;


// templates
//  template <typename T>
//  // T add(T a, T b) {
//  //     return a + b;
//  }

//class templates
template <typename T>
class show {
    public:
    T value;
    show(T val) : value(val) {}
    T getvalue() {
        return value;
    }
};

// //Template Specialization
// template <typename T>
// class printer {
//     public:
//     void print(T val) {
//         cout <<"Generic type:"<< val << endl;
//     }
// };
// template <>
// class printer<int> {
//     public:
//     void print(int val) {
//         cout <<"Specialized Pinter for int: "<< val << endl;
//     }
// };
//Template Non-Type Parameters with integral types
// template <typename T, int size>
// class Array {
// public:
//     T array[size];
//     void print() {
//         for(int i =0; i < size; i++) {
//             cout << array[i] << " ";
//         } cout << endl;
//     }
// };

//Using Non-Type Template Parameters with Arrays


// int main() {
    //templates
    // cout << add(3, 4) << endl;        // Uses int type, prints 7
    // cout << add(3.5, 4.5) << endl;    // Uses double type, prints 8.0
    // cout << add(static_cast<int>('A'), 1) << endl;      // Uses char type, prints 'B' (ASCII value of 'A' is 65, so 65 + 1 = 66 which is 'B')
    // return 0;

    // //class templates
    // show<int> int_show(122);
    // show<char> char_show('a');
    // show<string> string_show("hello");
    //
    // cout << int_show.getvalue() << endl;
    // cout << char_show.getvalue() << endl;
    // cout << string_show.getvalue() << endl;

    // //Template Specialization
    // printer<string> name;
    // printer<int> age;
    //
    // name.print("Samadjon");
    // age.print(19);
    //Template Non-Type Parameters with intergal types
    // Array<int, 10> arr;
    // Array<double, 13> arr2;
    // arr.print();
    // arr2.print();

// return 0;
//  }



//
//exceptions
//

int divide(int a , int b) {
    if (b == 0) {
        throw runtime_error("Divide by zero is not allowed");
    }
    return a/b;
}

 int main() {
    try {
        int result=divide(2,2);
        cout<<"Rusult: "<<result<<endl;
    } catch (const runtime_error& e) {
        cout<<"Error: "<<e.what()<<endl;
    }
    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.