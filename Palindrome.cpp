#include <iostream>
using namespace std;
int main()
{
     int n,x,y,z, num, digit, rev = 0;  // variable declaration
     cout << "Enter a positive number: ";
     cin >> num;
     n = num;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     cout << " The reverse of the number is: " << rev << endl;
     if (n == rev)//if condition introduced
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
//code ended    
}
