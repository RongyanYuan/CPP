// Exercises section 1.2
#include <iostream>
using namespace std;
// In large programs, we better specify using std::cout, using std::cin since using namespace std will apply std to code below.
int main(void){
  // Exercise 1.3:Write a program to print Hello, World on the standard
  //  output.
  cout << "Hello World" << endl;

  /*
  Our program used the addition operator, +, to add two numbers.
  Write a program that uses the multiplication operator, *, to print the
  product instead.
  */
  int number1 = 3;
  int number2 = 4;
  cout << "The multiplication product of " << number1 << " and "<<number2 << " is " 
       << number1*number2 << endl;

  /*
  We wrote the output in one large statement.
  Rewrite the program to use a separate statement to print each operand.
  */
  cout << "The multiplication product of ";
  cout << number1;
  cout << " and ";
  cout << number2;
  cout << " is ";
  cout << number1 * number2;
  cout << endl;

  /*
  Exercise 1.6: Explain whether the following program fragment is legal.

  std::cout << "The sum of " << v1; << " and " << v2;
            << " is " << v1 + v2 << std::endl;
  Diagnosis: This program is not legal since ";" indicates end of one statement,
   and left operand of the << operator is null. Therefore, << has nothing to return.
  Below is how we fix it!
  */

  int v1 = 2;
  int v2 = 3;
  std::cout << "The sum of " << v1; std::cout << " and " << v2;
            std::cout << " is " << v1 + v2 << std::endl;
  return 0;
}
// c++ primer page 34;
