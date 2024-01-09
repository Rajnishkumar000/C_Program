// C,C++ program demonstrate functionality of strncat()
#include <cstring>
#include <iostream>
using namespace std;

int main()
{

// Take any two strings
char src[50] = "efghijkl";
char dest[50]= "abcd";

// Appends 5 character from src to dest
strncat(dest, src, 5);
	
// Prints the string
cout <<"Source string : "<< src << endl;
cout <<"Destination string : "<< dest;
	
return 0;
}

// This code is contributed by shivanisinghss2110
