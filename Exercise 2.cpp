//LowerCase Converter

#include <iostream>
using namespace std;


int main() {
  string inputUser;

  cout << "Hello, Welcome to LowerCaseConverter\n";
  cout << "Please enter a word: ";
  cin>> inputUser;
  // cout<< inputUser<<"\n";
  string userInput=inputUser;
  string wordlength=userInput;

  int listLen = wordlength.length();
  char c;
  char lowCaseLetters[listLen];

  for (int i =0; i <= listLen -1; i++){
    c = wordlength[i];
    lowCaseLetters[i] = (tolower(c));
    wordlength[i] = lowCaseLetters[i];
  }

  cout<< userInput<< " converted to lower case is: "<< wordlength;
  
}
