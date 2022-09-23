#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

inline double square(double x) { return x * x; }
void firstref();
void swaps();
void swapr(int &, int &);
void swapp(int *, int *);
void swapv(int, int);
void file_it(ostream &os, double fo, const double fe[], int n);
const int LIMIT = 5;
const int ArSize = 80;
char *left(const char *str, int n = 1);
unsigned long left(unsigned long num, unsigned ct);
template <typename T>
void Swap(T &a, T &b);
template <typename T>
void Swap(T *a, T *b, int n);
void Show(int a[]);
const int Lim = 8;

int main() {
  // cout << square(5) << endl;

  // firstref();

  // swaps();

  // ofstream fout;
  // const char *fn = "ep-data.txt";
  // fout.open(fn);
  // if (!fout.is_open()) {
  //   cout << "Can't open " << fn << ". Bye.";
  //   exit(EXIT_FAILURE);
  // }
  // double objective;
  // cout << "Enter the focal length of your "
  //      << "telescope objective in mm: ";
  // cin >> objective;
  // double eps[LIMIT];
  // cout << "Enter the focal lengths, in mm, of " << LIMIT
  //      << " eyepieces:" << endl;
  // for (int i = 0; i < LIMIT; ++i) {
  //   cout << "Eyepiece #" << i + 1 << ": ";
  //   cin >> eps[i];
  // }
  // file_it(fout, objective, eps, LIMIT);
  // file_it(cout, objective, eps, LIMIT);
  // cout << "Done" << endl;

  // char sample[ArSize];
  // cout << "Enter a string:" << endl;
  // cin.get(sample, ArSize);
  // char *ps = left(sample, 4);
  // cout << ps << endl;
  // delete[] ps;
  // ps = left(sample);
  // cout << ps << endl;
  // delete[] ps;

  // char *trip = "Hawaii!!";
  // unsigned long n = 12345678;
  // int i;
  // char *temp;
  // for (i = 1; i < 10; ++i) {
  //   cout << left(n, i) << endl;
  //   temp = left(trip, i);
  //   cout << temp << endl;
  //   delete[] temp;
  // }

  // int i = 10;
  // int j = 20;
  // cout << "i, j = " << i << ", " << j << ".\n";
  // cout << "Using compiler generated int swapper:\n";
  // Swap(i, j);
  // cout << "Now i, j = " << i << ", " << j << ".\n";
  // double x = 24.5;
  // double y = 81.7;
  // cout << "x, y = " << x << ", " << y << ".\n";
  // cout << "Using compiler generated double swapper:\n";
  // Swap(x, y);
  // cout << "Now x, y = " << x << ", " << y << ".\n";

  // int i = 10, j = 20;
  // cout << "i, j = " << i << ", " << j << ".\n";
  // cout << "Using compiler generated int swapper:\n";
  // Swap(i, j);
  // cout << "Now i, j = " << i << ", " << j << ".\n";
  // int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
  // int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
  // cout << "Original arrays:\n";
  // Show(d1);
  // Show(d2);
  // Swap(d1, d2, Lim);
  // cout << "Swapped arrays:\n";
  // Show(d1);
  // Show(d2);

  return 0;
}

/*
 *  C++ 内联函数
 *  能避免过多的函数调用过程，减小开销
 *  代价：需占用更多内存
 *
 *  应有选择地使用内联函数。如果执行函数代码的时间比处理函数调用机制的时
 *  间长，则节省的时间将只占有整个过程的很小一部分。如果代码执行时间很短
 *  ，则内联调用就可以节省非内联调用使用的大部分时间。另一方面，由于这个
 *  过程相当快，因此尽管节省了该过程的大部分时间，但节省的时间绝对值并不
 *  大，除非该函数经常被调用。
 *
 *  通常做法：省略原型，将整个定义（即函数头和所有函数代码）放在本应提供
 *  原型的地方。
 *
 *  内联不能递归
 */

/*
 *  引用变量
 *  变量的别名
 *  引用 --- 必须在声明引用变量时进行初始化
 *  引用更接近 const 指针，必须在创建时进行初始化，一旦与某个变量关联起
 *  来，就将一直效忠于它。
 */

void firstref() {
  int rats = 101;
  int &rodents = rats;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;
  rodents++;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;
  cout << "rats address = " << &rats;
  cout << ", rodents address = " << &rodents << endl;
}

/*
 *  将引用用作函数参数
 */

void swaps() {
  int w1 = 300;
  int w2 = 350;
  cout << "w1 = " << w1;
  cout << " w2 = " << w2 << endl;

  cout << "Using references to swap contents:" << endl;
  swapr(w1, w2);
  cout << "w1 = " << w1;
  cout << " w2 = " << w2 << endl;

  cout << "Using pointers to swap contents again:" << endl;
  swapp(&w1, &w2);
  cout << "w1 = " << w1;
  cout << " w2 = " << w2 << endl;

  cout << "Trying to use passing by value:" << endl;
  swapv(w1, w2);
  cout << "w1 = " << w1;
  cout << " w2 = " << w2 << endl;
}

void swapr(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void swapp(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void swapv(int a, int b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

/*
 *  应尽可能使用 const
 *  1. 使用 const 可以避免无意中修改数据的编程错误；
 *  2. 使用 const 使函数能够处理 const 和非 const 实参，否则将只能接受非
 *     const数据；
 *  3. 使用 const 引用使函数能够正确生成并使用临时变量；
 *
 *  将引用用于结构
 *  将引用用于类对象
 */

/*
 *  对象、继承和引用
 */

void file_it(ostream &os, double fo, const double fe[], int n) {
  ios_base::fmtflags initial;
  initial = os.setf(ios_base::fixed);
  os.precision(0);
  os << "Focal length of objective: " << fo << " mm" << endl;
  os.setf(ios::showpoint);
  os.precision(1);
  os.width(12);
  os << "f.1 eyepiece";
  os.width(15);
  os << "mangification" << endl;
  for (int i = 0; i < n; ++i) {
    os.width(12);
    os << fe[i];
    os.width(15);
    os << int(fo / fe[i] + 0.5) << endl;
  }
  os.setf(initial);
}

/*
 *  何时使用引用参数
 *  使用引用参数的主要原因有两个:
 *  - 程序员能够修改调用函数中的数据对象；
 *  - 通过传递引用而不是整个数据对象，可以提高程序的运行速度；
 *
 *  详见书的 8.2.7
 */

/*
 *  默认参数
 *  默认参数并非编程方面的重大突破，而只是提供了一种便捷的方式。在设计类时
 *  你将发现，通过使用默认参数，可以减少要定义的析构函数、方法以及方法重载
 *  的数量。
 */

char *left(const char *str, int n) {
  if (n < 0) n = 0;
  char *p = new char[n + 1];
  int i;
  for (i = 0; i < n && str[i]; ++i) p[i] = str[i];
  while (i <= n) p[i++] = '\0';
  return p;
}

/*
 *  函数重载
 *  默认参数让你能够使用不同数目的参数调用同一个函数，而函数多态（函数
 *  重载）让你能够使用多个同名的函数。
 *  可以通过函数重载来设计一系列函数---它们完成相同的工作，但是用不同
 *  的参数列表
 *
 *  函数重载的关键是函数的参数列表---也称为函数特征标（function signature）
 */

unsigned long left(unsigned long num, unsigned ct) {
  unsigned digits = 1;
  unsigned long n = num;

  if (ct == 0 || num == 0) return 0;
  while (n /= 10) digits++;
  if (digits > ct) {
    ct = digits - ct;
    while (ct--) num /= 10;
    return num;
  } else
    return num;
}

/*
 *  虽然函数重载很吸引人，但也不要滥用。仅当函数基本上执行相同的任务，但使用不
 *  同形式的数据时，才应采用函数重载。
 *
 *  名称修饰（name decoration）或名称矫正（name mangling），它根据函数原型中指
 *  定的形参类型时对每个函数名进行加密。
 */

/*
 *  函数模板 --- 是通用的函数描述
 *  函数模板允许以任意类型的方式来定义函数。
 *  关键字 typename 或 class
 *
 *  如果需要多个将同一算法用于不同类型的函数，请使用模板。如果不考虑向后兼容的
 *  问题，并愿意键入较长的单词，则声明类型参数时，应使用关键字 typename 而不使
 *  用 class。
 */

template <typename T>
void Swap(T &a, T &b) {
  T temp;
  temp = a;
  a = b;
  b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n) {
  T temp;
  for (int i = 0; i < n; ++i) {
    temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }
}

void Show(int a[]) {
  cout << a[0] << a[1] << "/";
  cout << a[2] << a[3] << "/";
  for (int i = 4; i < Lim; ++i) cout << a[i];
  cout << endl;
}

/*
 *  模板的局限性
 *  编写的模板函数很可能无法处理某些数据类型
 */
