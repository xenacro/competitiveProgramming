/*Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
  int i=0,r=0;
  string s1, s2;
  cin>>s1;
  cin>>s2;
  while (s1[i]){
    s1[i]=toupper(s1[i]);
    s2[i]=toupper(s2[i]);
   i++;
 }
 r=strcmp(s1, s2);
 cout<<r;
}
