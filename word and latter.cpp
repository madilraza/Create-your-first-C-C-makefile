#include <iostream>
using namespace std;
#include <conio.h> //for getche()
int main()
{
char dir='a';
int x=10, y=10;
cout << "Type Enter to quit\n";
while( dir != '\r' ) //until Enter is typed
{
cout << "\nYour location is " << x << ", " << y;
cout << "\nPress direction key (n, s, e, w): ";
dir = getche(); //get character
if( dir=='n') //go north
y--;
else
if( dir=='s' ) 
y++;
else
if( dir=='e' ) 
x++;
else
if( dir=='w' ) 
x--;
} 
return 0;
}
