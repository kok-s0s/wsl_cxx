#include <climits>
#include <iostream>
#define ZERO 0

using namespace std;

void limits();
void exceed();
void hexoct();
void hexoct2();
void chartype();
void morechar();
void floatnum();

int main() {
  /*
   *    面向对象编程（OOP）的本质是设计并扩展自己的数据类型。
   *    设计自己的数据类型就是让类型与数据匹配。
   *
   *    基本类型 | 复合类型
   *
   *    整型 short、int、long 和 long long
   *    字节（byte）通常指的是8位的内存单元，1KB等于1024字节，1MB等于1024KB
   *
   *    大括号初始化器 --- 用于单值变量
   *
   *    无符号类型
   *
   *    整型字面值 十进制、八进制、十六进制、二进制
   *
   *    Question: C++如何确定常量的类型
   *
   *    char 类型：字符和小整数
   *    A: 65      M: 77
   *    cout.put() 一个重要的C++ OOP 概念 --- 成员函数
   *    类定义了如何表示和控制数据。成员函数归类所有，描述了操纵类数据的方法。
   *
   *    char 字面值 a: 97
   *
   *    转义序列   \n    \t    \v    \b    \\     \'     \"     \?     \a    \r
   *
   *    通用字符名
   *
   *    signed char 和 unsigned char
   *
   *    wcha_1
   *
   *    char16_t 和 char32_t
   *
   *    bool 类型
   *
   *    const 限定符 --- const type name = value
   *
   *    浮点数
   *    E表示法
   *    浮点类型 --- float、double、long double
   *
   *    学会读取包含文件
   *
   *    浮点常量
   *
   *    与整数相比，浮点数可以表示整数之间的值，且能表示的范围大得多；另一方面，浮点运算的速度通常比整数运算慢，且精度将降低。
   *
   *    C++ 算数运算符 pass/easy
   *    运算符重载
   *
   *    类型转换 ？？ important
   *    C++11 将使用大括号的初始化称为列表初始化（list-initialization）
   *    表达式的转换
   *    传递参数时的转换
   *    强制类型转换
   *    C++11 中的 auto 声明
   */

  limits();
  cout << endl;
  exceed();
  cout << endl;
  hexoct();
  cout << endl;
  hexoct2();
  cout << endl;
  chartype();
  cout << endl;
  morechar();
  cout << endl;
  floatnum();

  // code_1
  const int chiToCun = 12;
  double cunHeight, chiHeight;
  cout << "Please enter your cunHeight: ";
  cin >> cunHeight;
  chiHeight = cunHeight / chiToCun;
  cout << "Your cunHeight is " << cunHeight << ", and your chiHeight is "
       << chiHeight << endl;

  // code_2
  const double cunToM = 0.0254;
  const double kToBan = 2.2;
  double chiH, cunH, banW;
  cout << "Please enter your chiH: ";
  cin >> chiH;
  cout << "Please enter your cunH: ";
  cin >> cunH;
  cout << "Please enter your banW: ";
  cin >> banW;
  cout << "Your cunHeight now is " << (chiToCun * chiH + cunH) << endl;
  cout << "Your height is " << (chiToCun * chiH + cunH) * cunToM << " m"
       << endl;
  cout << "Your weight is " << (banW / kToBan) << " kg" << endl;
  cout << "Your BMI is " << (banW / kToBan) / (chiToCun * chiH + cunH) * cunToM
       << endl;

  // code_3
  const int degreeToMinutes = 60;
  const int minuteToSeconds = 60;
  double degrees, minutes, seconds;
  cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
  cout << "First, enter the degrees: ";
  cin >> degrees;
  cout << "Next, enter the minutes of arc: ";
  cin >> minutes;
  cout << "Finally, enter the seconds of arc: ";
  cin >> seconds;
  cout << degrees << " degrees, " << minutes << " minutes, " << seconds
       << " seconds = "
       << (degrees + minutes / degreeToMinutes +
           seconds / (degreeToMinutes * minuteToSeconds))
       << " degrees." << endl;

  // code_4
  const int dayToHours = 24;
  const int hourToMinutes = 60;
  long long curSeconds;
  cout << "Enter the number of seconds: ";
  cin >> curSeconds;
  cout << curSeconds << " seconds = "
       << (curSeconds / minuteToSeconds / hourToMinutes / dayToHours)
       << " days, " << (curSeconds / minuteToSeconds / hourToMinutes) % 24
       << " hours, " << (curSeconds / minuteToSeconds) % 60 << " minutes, "
       << curSeconds % 60 << " seconds." << endl;

  // code_5
  long long populationWorld, populationUS;
  cout << "Enter the world's population: ";
  cin >> populationWorld;
  cout << "Enter the population of the US: ";
  cin >> populationUS;
  cout << "The population of the US is "
       << (1.0 * populationUS / populationWorld) << "% of the world population."
       << endl;

  // code_6
  // broing in the world, i feel so tired, so i don't want to do it again.

  // code_7
  // i don't want  to do this for the same reasons as above.

  return 0;
}

void limits() {
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  // sizeof operator yields size of type or of variable
  cout << "int is " << sizeof(n_int) << " bytes." << endl;
  cout << "short is " << sizeof(n_short) << " bytes." << endl;
  cout << "long is " << sizeof(n_long) << " bytes." << endl;
  cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
  cout << endl;

  cout << "Maximum values:" << endl;
  cout << "int: " << n_int << endl;
  cout << "short: " << n_short << endl;
  cout << "long: " << n_long << endl << endl;

  cout << "Minimum int value = " << INT_MIN << endl;
  cout << "Bits per byte = " << CHAR_BIT << endl;
}

void exceed() {
  short sam = SHRT_MAX;
  unsigned short sue = sam;

  cout << "Sam has " << sam << " dollars and Sue has " << sue;
  cout << " dollars deposited." << endl
       << "Add $1 to each account." << endl
       << "Now ";

  sam = sam + 1;
  sue = sue + 1;
  cout << "Sam has " << sam << " dollars and Sue has " << sue;
  cout << " dollars deposited.\nPoor Sam!" << endl;

  sam = ZERO;
  sue = ZERO;
  cout << "Sam has " << sam << " dollars and Sue has " << sue;
  cout << " dollars deposited." << endl
       << "Take $1 from each account." << endl
       << "Now ";

  sam = sam - 1;
  sue = sue - 1;
  cout << "Sam has " << sam << " dollars and Sue has " << sue;
  cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
}

void hexoct() {
  int chest = 42;
  int waist = 0x42;
  int inseam = 042;

  cout << "Monsieur cuts a striking figure!\n";
  cout << "chest = " << chest << " (42 in decimal)\n";
  cout << "waist = " << waist << " (0x42 in hex)\n";
  cout << "inseam = " << inseam << " (042 in octal)\n";
}

void hexoct2() {
  int chest = 42;
  int waist = 42;
  int inseam = 42;

  cout << "Monsieur cuts a striking figure!\n";
  cout << "chest = " << chest << " (decimal for 42)\n";
  cout << hex;
  cout << "waist = " << waist << " (hexadecimal for 42)\n";
  cout << oct;
  cout << "inseam = " << inseam << " (octal for 42)\n";
}

void chartype() {
  char ch;

  cout << "Enter a character: " << endl;
  cin >> ch;
  cout << "Hola! ";
  cout << "Thank you for the " << ch << " character." << endl;
}

void morechar() {
  char ch = 'M';
  int i = ch;
  cout << "The ASCII code for " << ch << " is " << i << endl;

  cout << "Add one to the character code" << endl;
  ch = ch + 1;
  i = ch;
  cout << "The ASCII code for " << ch << " is " << i << endl;

  // using the cout.put() member function to display a char
  cout << "Displaying char ch using cout.put(ch): ";
  cout.put(ch);

  // using cout.put() to display a char constant
  cout.put('!');
  cout << endl << "Done" << endl;
}

void floatnum() {
  cout.setf(ios_base::fixed, ios_base::floatfield);
  float tub = 10.0 / 3.0;
  double mint = 10.0 / 3.0;
  const float million = 1.0e6;

  cout << "tub = " << tub;
  cout << ", a million tubs = " << million * tub;
  cout << ",\nand ten million tubs = ";
  cout << 10 * million * tub << endl;

  cout << "mint = " << mint << " and a million mints = ";
  cout << million * mint << endl;
}
