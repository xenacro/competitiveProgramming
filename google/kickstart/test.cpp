#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Storing it in string array
    char string[] = "Geeks for Geeks";
  
    // The character we've to search for
    char character = 'k';
  
    // Storing in a pointer ptr
    char* ptr = strrchr(string, character);
  
    // ptr-string gives the index location
    if (ptr)
        cout << "Last position of " << character
             << " in " << string << " is " << ptr - string;
  
    // If the character we're searching is not present in the array
    else
        cout << character << " is not present "
             << string << endl;
    return 0;
}