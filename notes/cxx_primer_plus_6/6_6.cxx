/*

i am a lazy man? boy? child?

*/

#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

/*

if 语句
if else 语句
逻辑运算符：&&、|| 和 !
cctype 字符函数库
条件运算符：? :     三元运算符
switch 语句
continue 和 break 语句
读取数字的循环
基本文件输入/输出

*/

void ifeg();
void ifelseeg();
void ifelseifelse();
void cctype();
void enumeg();
void outfile();
void sumafile();

int main() {
  // ifeg();
  // ifelseeg();
  // ifelseifelse();
  // cctype();
  // enumeg();
  // outfile();
  // sumafile();

  cin.get();

  return 0;
}

void ifeg() {
  char ch;
  int spaces = 0;
  int total = 0;
  cin.get(ch);
  while (ch != '.') {
    if (ch == ' ')
      ++spaces;
    ++total;
    cin.get(ch);
  }
  cout << spaces << " spaces, " << total;
  cout << " characters total in sentence.\n";
  cin.get();
}

// If you have a Captain Cookie card, you get a Cookie Plus Plus, else you just
// get a Cookie d'Ordinaire.

void ifelseeg() {
  char ch;
  cout << "Type, and I shall repeat.\n";
  cin.get(ch);
  while (ch != '.') {
    if (ch == '\n')
      cout << ch;
    else
      cout << ch + 1;
    cin.get(ch);
  }
}

void ifelseifelse() {
  const int Fave = 27;
  int n;

  cout << "Enter a number in the range 1-100 to find " << endl;
  cout << "my favorite number: ";
  do {
    cin >> n;
    if (n < Fave)
      cout << "Too low -- guess again: ";
    else if (n > Fave)
      cout << "Too high -- guess again: ";
    else
      cout << Fave << " is right!" << endl;
  } while (n != Fave);
  cin.get();
}

/*

isalnum()
isalpha()
iscntrl()
isdigit()
isgraph()
islower()
isprint()
ispunct()
isspace()
isupper()
isxdigit()
tolower()
toupper()

*/

void cctype() {
  cout << "Enter text for analysis and type to terminate input" << endl;

  char ch;
  int white_space = 0;
  int digits = 0;
  int chars = 0;
  int punct = 0;
  int others = 0;

  cin.get(ch);

  while (ch != '@') {
    if (isalpha(ch))
      chars++;
    else if (isspace(ch))
      white_space++;
    else if (isdigit(ch))
      digits++;
    else if (ispunct(ch))
      punct++;
    else
      others++;
    cin.get(ch);
  }
  cout << chars << " letters, " << white_space << " white_space, " << digits
       << " digits, " << punct << " punctuations, " << others << " others."
       << endl;
  cin.get();
}

/*

将枚举量用作标签

*/

enum { red, orange, yellow, green, blue, violet, indigo };

void enumeg() {
  cout << "Enter color code (0-6): ";
  int code;
  cin >> code;
  while (code >= red && code <= indigo) {
    switch (code) {
    case red:
      cout << "Her lips were red." << endl;
      break;
    case orange:
      cout << "Her hair was orange." << endl;
      break;
    case yellow:
      cout << "Her shoes were yellow." << endl;
      break;
    case green:
      cout << "Her nails were green." << endl;
      break;
    case blue:
      cout << "Her sweatsuit was blue." << endl;
      break;
    case violet:
      cout << "Her eyes were violet." << endl;
      break;
    case indigo:
      cout << "Her mood were indigo." << endl;
      break;
    }
    cout << "Enter color code (0-6): ";
    cin >> code;
  }
  cout << "Bye" << endl;
}

void outfile() {
  char automobile[50];
  int year;
  double a_price;
  double b_price;

  ofstream outFile;
  outFile.open("carinfo.txt");

  cout << "Enter the mark and model of automobile: ";
  cin.getline(automobile, 50);
  cout << "Enter the model year: ";
  cin >> year;
  cout << "Enter the original asking price: ";
  cin >> a_price;
  b_price = 0.913 * a_price;

  cout << fixed;
  cout.precision(2);
  cout.setf(ios_base::showpoint);
  cout << "Make and model: " << automobile << endl;
  cout << "Year: " << year << endl;
  cout << "Was asking $" << a_price << endl;
  cout << "Now asking $" << b_price << endl;

  outFile << fixed;
  outFile.precision(2);
  outFile.setf(ios_base::showpoint);
  outFile << "Make and model: " << automobile << endl;
  outFile << "Year: " << year << endl;
  outFile << "Was asking $" << a_price << endl;

  outFile.close();
  cin.get();
}

void sumafile() {
  const int SIZE = 60;
  char filename[SIZE];
  ifstream inFile;
  cout << "Enter name of data file: ";

  cin.getline(filename, SIZE);
  inFile.open(filename);
  if (!inFile.is_open()) {
    cout << "Could not open the file " << filename << endl;
    cout << "Program terminating." << endl;
    exit(EXIT_FAILURE);
  }
  double value;
  double sum = 0.0;
  int count = 0;

  inFile >> value;
  while (inFile.good()) {
    ++count;
    sum += value;
    inFile >> value;
  }
  if (inFile.eof())
    cout << "End of file reached." << endl;
  else if (inFile.fail())
    cout << "Input terminated by data mismatch." << endl;
  else
    cout << "Input terminated for unknown reason.\n";

  if (count == 0)
    cout << "No data processed." << endl;
  else {
    cout << "Items read: " << count << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / count << endl;
  }
  inFile.close();
  cin.get();
}