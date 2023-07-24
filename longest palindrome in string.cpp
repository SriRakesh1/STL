#include <iostream>
#include<vector>
#include<sstream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string str1) // checking whether it is a palindrome
{
    string str2 = str1;
    reverse(str2.begin(),str2.end());
    if(str2 == str1)
    {
        return 1;
    }
    return 0;
}




int main()
{
    string str = "aaaa noon dood not ghghg"; //initializing the string
    int n=str.length();
    int maxLen = 0;
    istringstream iss(str);
    string word,Lpalindrome;


    while(getline(iss,word,' '))
    {
        if(isPalindrome(word) && word.length()>maxLen ) 
        {
            maxLen = word.length(); //checking the longest palindrome
            Lpalindrome = word;
        }
    }
    cout<< "The longest palindrome is : " << Lpalindrome ;
}
