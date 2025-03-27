#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <exception>
#include <cctype>
#include <string>
#include <iterator>
#include <list>

using namespace std;
//task2
// void cleanNumbers(vector<string>& vec) {
//  // Use remove_if and erase to remove words containing digits
//  vec.erase(remove_if(vec.begin(), vec.end(), [](string& word) {
//  // Check if any character in the word is a digit
//  return any_of(word.begin(), word.end(), ::isdigit);
//  }), vec.end());
// }



int main() {
    //sorting in ascending order on STL
     // vector<int> v={5,10,3,4,8,7,6,2,9,1};
     // sort(v.begin(),v.end());

    // decending order
    // sort(v.begin(), v.end(), greater<int>());
     // for (int i : v) {
     //    cout<<i<<" "<<endl;
     // }


    // find in STL
    // vector<int> v1= {1,2,3,4,5,6,7,8,9};
    // auto pos=find(v1.begin(), v1.end(), 4);
    //
    // if (pos!=v1.end()) {
    //     cout<<"Element found at index "<< distance(v1.begin(), pos)<<endl;
    // }else {
    //     cout<<"Element not found"<<endl;
    // }

    //reverse at STL
    // vector<int> v2={1,2,3,4,5,6,7,8,9};
    //
    // reverse(v2.begin(), v2.end());
    // for (int s: v2) {
    //     cout << s<<" ";
    // }

    //getting unique elements
    // vector <int> v={1, 2,2 ,3, 13, 24, 24, 3,4 ,4, 5, 5, 6 ,6, 7,7, 7 ,7};
    //
    // sort(v.begin(), v.end());
    //
    // auto it= unique (v.begin(), v.end());
    //
    // v.erase(it, v.end() );
    //
    // for (int s: v) {
    //     cout << s <<" " <<endl;
    // }

    //counting specific numbers in STL
    // vector <int> v={1, 2, 3, 4, 5, 6, 7, 8 ,9 ,1,2,3,4,5,6,6,3,3,3,5,3,5,6,3,6,4,6};
    // int count_2= count(v.begin(), v.end(), 6);
    // cout<<count_2<<endl;

    //swapping elements in STL;
    // vector<string> s={"Cars", "Boats", "Planes","Trucks", "Military cars"};
    //
    // swap(s[4],s[0]);
    // for (string i: s) {
    //     cout<<i<<" "<<endl;
    // }

    //Length and Size in string
 //    string s="Samadjon";
 // cout<<s.size()<<endl;
 // cout<<s.length();
 //    return 0;

  // Accessing Character
 // string n="Samadjon";
 // cout<<n[1]<<endl;
 // cout<<n.at(2)<<endl;
 //
 // try {
 //  cout<<n.at(12)<<endl;
 // } catch (const out_of_range& e) {
 //  cout<<"Error: " <<e.what()<<endl;
 // }
 //

 //Appending Strings
 // name.append()
 //  string s1="Hello";
 //  string s2=" John";
 //
 //  s1+=s2;
 //  cout<<s1<<endl;
 //
 //  s1.append("  How are you?");
 //  cout<<s1<<endl;

//Substring
 //name.substr();
 // string a="Samadjon Sayfullayev";
 // string sub= a.substr(0,8);
 // cout<<sub;

 //Find Substring
 // string i="Good morning";
 // size_t pos= i.find("morning");
 // if (pos != string::npos) {
 //  cout<<"'Good' word found at index "<<pos<<endl;
 // } else {
 //  cout<<"'Good' word not found"<<endl;
 // }

 //7. Replacing Substrings
 //replace()
 //  string s="uuuuu u u u u uuuuu";
 //  s.replace(0, 4, "I love you");
 //  cout << s << endl;
 //
 // erase Characters
 // erase()
 //  string i="Hello";
 //  i.erase(0,1);
 //  cout<<i<<endl;

//Converting to Upper/Lower Case
 // string i="Hello World!";
 // transform(i.begin(), i.end(), i.begin(), ::tolower );
 // cout<<"Lowercase: "<<i<<endl;
 //
 // transform(i.begin(), i.end(), i.begin(), ::toupper );
 // cout<<"Uppercase: "<<i<<endl;


 //Converting to Integer
 // stoi(name)
// string i="1234";
//  int s =stoi(i);
//  cout<<s<<endl;

 //task 1
// int i;
//  vector<int> n={4, 22, 1, 5, 4};
//  cout<<"enter a value to be removed: ";
//  cin>>i;
//
//  auto new_end=remove(n.begin(),n.end(),i);
//  int count_non_val=distance(n.begin(),new_end);
//  cout<<count_non_val<<endl;
//
//  for (auto it=n.begin();it!=new_end;it++) {
//   cout<<*it<<" ";
//  }
// cout<<endl;

 //task2
 // int n;
 // cout << "Please enter the number of  words: " << endl;
 // cin >> n;
 //
 // vector<string> words(n);
 // for (int i=0; i<n;++i) {
 //  cin >> words[i];
 // }
 // cleanNumbers(words);
 //
 // for (auto word : words) {
 //  cout << word << endl;
 // }
 // cout << endl;

 //task3
 int n;
 cout<<"Enter the number of numbers: ";
 cin>>n;

 list<double> val;
 double input_value;

cout<<"Enter the "<<n<<" numbers: ";

 for (int i=0;i<n;i++) {
  cin>>input_value;
  val.push_back(input_value);
  }

cout<<"List: ";
  for (auto it=val.begin(); it !=val.end();++it) {
   cout<<*it<<" ";
  }
  cout<<endl;

 reverse(val.begin(), val.end());
  cout<<"Reversed: ";
  for (auto it=val.begin(); it !=val.end();++it) {
   cout<<*it<<" ";
  } cout<<endl;

  double sum=0;
  for(auto it=val.begin();it!=val.end(); ++it){
    sum+=*it;
  }
  double average =sum/val.size();

cout<<"Average: "<<average<<endl;






for(auto it=val.begin();it!=val.end();++it){
  if(*it<average){
  it=val.erase(it);
  } else {
    ++it;
  }
}
  cout<<"After removing: ";
  for(auto it=val.begin();it!=val.end();++it){
    cout<<*it<<" ";
  }
cout<<endl;

val.sort();

  cout<<"Sorted: ";
  for(auto it=val.begin();it!=val.end();++it){
   cout<<*it<<" ";
  }
  cout<<endl;

 return 0;
}// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
