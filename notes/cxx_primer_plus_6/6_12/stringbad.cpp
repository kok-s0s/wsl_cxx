// stringbad.cpp -- StringBad class methods
#include "stringbad.h"

#include <cstring>
using std::cout;

// initializing static class member
int StringBad::num_strings = 0;

// class methods
// construct StringBad from C string
StringBad::StringBad(const char *s) {
  len = std::strlen(s);
  str = new char(len + 1);
  std::strcpy(str, s);
  num_strings++;
  cout << num_strings << ": \n" << str << "\" object created \n";
}

StringBad::StringBad() {
  len = 4;
  str = new char(4);
  std::strcpy(str, "C++");
  num_strings++;
  cout << num_strings << ": \n" << str << "\" default object created \n";
}

StringBad::~StringBad() {}