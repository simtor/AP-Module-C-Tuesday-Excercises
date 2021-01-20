//Exercise 3: Palindrome Checker
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    cout << "Please enter a word:"; cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    if (flag) {
        cout << "Sorry,"<< "'"<<string1 <<"'"<< " is not a palindrome" << endl; 
    }    
    else {
        cout << "Yes,"<< "'"<<string1 <<"'"<< " is a palindrome" << endl;  
    }
    main();
    return 0;
}

