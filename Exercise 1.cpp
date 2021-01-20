//Exercise 1: ReverseWord
 
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];//declare a character array
    int i,len,temp;//dclare varibles for the algorithm 
    cout << "Hello, Welcome to ReverseWord\n";
    cout << "Please enter a word: "; 
    cin>>str; //input string
    len=strlen(str);//mesures the length of the string 
    string userInput=str;
    i=0;
    //While loop that convert the input backwards
    while(i<len/2){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
 i++;
    }
    //outputs the word spelt backwards
   cout<< userInput<<" spelt backwards is: "<<str;
    
    return 0;
}
