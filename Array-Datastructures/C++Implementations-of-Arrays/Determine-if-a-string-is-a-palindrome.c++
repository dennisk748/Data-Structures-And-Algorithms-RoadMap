/*
    Given a string S consisting of N characters of the English alphabet,
 the task is to check if the given string is a palindrome. 
 If the given string is a palindrome, then print “Yes“. Otherwise, print “No“.

    Note: A string is said to be palindrome if the reverse of the string is the same as the string.
*/

// First Implementation
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

bool IsPalindrome(string S){

    int half = S.length()/2;
    int length = S.length();
    int pos = 2;
    int pos2 = 1;
    bool isTrue;

    if(length % 2 != 0){
        
        for (int i = half + 1; i < length; i++)
        {
            int iterative_index = i - pos;
            printf("elements for an odd string: %c == %c\n" , S[iterative_index], S[i]);
            if(S[i] == S[iterative_index]){
            isTrue = true;
            }else{
                isTrue = false;
            }
            pos += 2;
        }   
    }else{

        for (int i = half; i < length; i++)
        {
            int iterative_index = i - pos2;
            printf("elements for an even string : %c == %c\n" , S[iterative_index], S[i]);
            if(S[i] == S[iterative_index]){
                isTrue = true;
            }else{
                isTrue = false;
            }
            pos2 += 2;
        }
    }

    return isTrue;
}

// Second Implementation

/*bool IsPalindrome2(string S){

    string reversed = S;
    bool IsTrue;

    reverse(reversed.begin(),reversed.end());

    if(S == reversed){
        IsTrue = true;
    }else{
        IsTrue = false;
    }
    return IsTrue;
}
*/
int main() {
    bool value = IsPalindrome("STRING");

    
    if(value){
        cout<<"the string is a palindrome"<<endl;
    }else{
        cout<<"the string is not a palindrome"<<endl;
    }
}