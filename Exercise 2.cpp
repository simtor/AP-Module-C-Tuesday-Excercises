//Exercise 2: LowerCase Converter

#include <iostream>
using namespace std;


int main() {
  string inputUser;//declare the varible used for user Input

  cout << "Hello, Welcome to LowerCaseConverter\n";
  cout << "Please enter a word: ";
  cin>> inputUser;//Getting user input by using cin
  string userInput=inputUser;
  string wordlength=userInput;

  int listLen = wordlength.length();//find the length of the varible 
  char c;
  char lowCaseLetters[listLen];
  //for loop used to convert capital cases to  lower cases 
  for (int i =0; i <= listLen -1; i++){
    c = wordlength[i];
    lowCaseLetters[i] = (tolower(c));
    wordlength[i] = lowCaseLetters[i];
  }
  //OUTPUT the result of the for loop 
  cout<< userInput<< " converted to lower case is: "<< wordlength;
  
}
