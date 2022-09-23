#include <array>
#include <iostream>

using namespace std;

/*

for 循环
表达式与语句
++ 和 --
组合赋值运算符
复合语句（语句块）
逗号运算符
关系运算符：>、>=、==、<=、< 和 !=
while 循环
typedef 工具
do while 循环
字符输入方法 get()
文件尾条件
嵌套循环和二维数组

*/

/*

statement1
for (initialization; test-expression; update-expression)
        statement2
statement3

*/

/*

注意：C++表达式是值或值与运算符的组合，每个C++表达式都有值。
只要加上分号，所有的表达式都可以成为语句，但不一定有编程意义。

*/

/*

for (for-init-statement condition; expression)
        statement

*/

/*

注意：指针递增和递减遵循指针算术规则。因此，如果 pt
指向某个数组的第一个元素，++pt 将修改 pt，使之指向第二个元素。

*/

/*

基于范围（range-based）的 for 循环
这种循环主要用于各种模板容器类

eg:

double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
for (double x : prices)
        cout << x << std::endl;

*/

/*

文件尾条件
检测文件尾（EOF）

*/

void textin3();
void code_1();
void code_2();
void code_3();
void code_4();

int main() {
  // textin3();
  // code_1();
  // code_2();
  // code_3();
  code_4();

  cin.get();

  return 0;
}

void textin3() {
  char ch;
  int count = 0;
  cin.get(ch);
  while (cin.fail() == false) {
    cout << ch;
    ++count;
    cin.get(ch);
  }
  cout << endl << count << " characters read" << endl;
}

void code_1() {
  int start, end, sum = 0;
  cout << "Please enter start and end: ";
  cin >> start >> end;
  for (int i = start; i <= end; ++i) {
    sum += i;
  }
  cout << "The sum of " << start << " to " << end << " is " << sum << endl;
  cin.get();
}

void code_2() {
  array<long double, 16> factorials;
  factorials[1] = factorials[0] = 1LL;
  for (int i = 2; i < 16; ++i) {
    factorials[i] = i * factorials[i - 1];
  }
  for (int i = 0; i < 16; ++i) {
    cout << i << "! = " << factorials[i] << endl;
  }
}

void code_3() {
  int num, sum = 0;
  do {
    cin >> num;
    sum += num;
    cout << sum << endl;
  } while (num != 0);
  // cin.get();
}

void code_4() {
  double x = 10000, y = 10000;
  int years;
  cout << "Please enter the years: ";
  cin >> years;
  double getX = x + x * 0.10 * years;
  double getY = y;
  for (int i = 1; i <= years; ++i) {
    getY = (getY)*0.05 + getY;
  }
  cout << "getX = " << getX << endl;
  cout << "getY = " << getY << endl;
  cin.get();
}

// i am lazy boy, if i have enough time, i will finish it.

void code_5() {}
