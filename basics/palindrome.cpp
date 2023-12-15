#include <bits/stdc++.h>
using namespace std ;

bool checkString(int i, string &s) {
    if ( i >= s.size()/2) return true ;
    if ( s[i] != s[s.size()-i-1]) return false ;
    return checkString(i+1,s) ;
}

int main() {
    string s = "MADAM" ;
    checkString(0,s) ;
    if (checkString(0,s)) cout << "PALINDROME" ;
    else cout << "NOT PALINDROME" ; 
}