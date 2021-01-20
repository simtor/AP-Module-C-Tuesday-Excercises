//Exercise 3: Palindrome Checker
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
  //declare variables for the for loop.
    char string1[20];
    int i, length;
    int flag = 0;
    
    cout << "Please enter a word:";
    cin >> string1;//Getting user input using cin 
    length = strlen(string1);//Get the length of the user input 
    
    //Algorithm for finding the palindrome
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;//breaks for loop whne finished 
   }
}
    //if statemnt used to  output if the user input is a palindrome or not 
    if (flag) {
        cout << "Sorry,"<< "'"<<string1 <<"'"<< " is not a palindrome" << endl; 
    }    
    else {
        cout << "Yes,"<< "'"<<string1 <<"'"<< " is a palindrome" << endl;  
    }
    main();//restart the function as show in the exmaple 
    return 0;
}

