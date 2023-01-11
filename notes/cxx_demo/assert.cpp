// https://www.scaler.com/topics/cpp-assert/

// the two headers iostream and cassert are included to be able to make use of
// cin, cout and assert functions
#include <cassert>
#include <iostream>
using namespace std;
// main method is called
int main() {
  // an integer variable called num is defined and the user is prompted to enter
  // a value less than or equal to 5
  int num;
  cout << "Enter an integer value less than or equal to 5: " << endl;
  cin >> num;
  cout << "The value entered is: " << num << endl;
  // assert function is used to check if the assumption made by the user that
  // the user enters a value less than or equal to 5 is true or false
  assert(num <= 5);
  return 0;
}
