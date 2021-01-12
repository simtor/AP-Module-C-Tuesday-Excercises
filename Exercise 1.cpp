//Exercise 1: ReverseWord
 
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];//declare a character array
    int i,len,temp;
    cout << "Hello, Welcome to ReverseWord\n";
    cout << "Please enter a word: "; 
    cin>>str; //input string
    len=strlen(str);
    string userInput=str;
    i=0;
    while(i<len/2){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
 i++;
    }
   cout<< userInput<<" spelt backwards is: "<<str;
    
    return 0;
}
