#include <iostream>

using namespace std;

enum class Test { MAN, WOMAN, BABY, LADY, BOY, GIRL };

int main() {
  for (Test i; i <= Test::GIRL; i = (Test)((int)i + 1)) {
    cout << (int)i;
  }

  cout << endl;

  for (Test i; i <= Test::GIRL; i = (Test)(int(i) + 1)) {
    cout << (int)i;
  }

  cout << endl;

  return 0;
}