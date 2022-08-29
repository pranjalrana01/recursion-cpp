#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j){
    //base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        checkPalindrome(str,i+1,j-1);
    }
}
int main(){
    string name="babaabab";

    bool ans = checkPalindrome(name,0,name.length()-1);
    if(ans){
        cout<<"it is a palindrome"<<endl;
    }
    else{
        cout<<"it is not a palindrome"<<endl;
    }

    return 0;
}