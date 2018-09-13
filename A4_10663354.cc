 
#include <iostream>
using namespace std;

int gcd(int number1, int number2);

int main()

{


  int number1;
  int number2;
  

cout << "Enter the first integer: ";
cin >> number1;

cout << "Enter the second integer: ";
cin >> number2;

cout << "G.C.D of " << number1 << " & " << number2 <<  "is :" << gcd(number1, number2);

return 0;

}

int gcd(int number1, int number2)

{

if (number2 != 0)
 return gcd( number2, number1 % number2);

 

else
 return number1;

}



# EdwinOfori3
# EdwinOfori3
# EdwinOfori3
# EdwinOfori3
# EdwinOfori3
# EdwinOfori3
 #edwin
# edwin 
