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
 *  C++ ????????????
 *  ???????????????????????????????????????????????????
 *  ??????????????????????????????
 *
 *  ??????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ??????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ??????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ??????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ???????????????????????????????????????
 *
 *  ??????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ??????????????????
 *
 *  ??????????????????
 */

/*
 *  ????????????
 *  ???????????????
 *  ?????? --- ?????????????????????????????????????????????
 *  ??????????????? const ???????????????????????????????????????????????????????????????????????????
 *  ?????????????????????????????????
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
 *  ???????????????????????????
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
 *  ?????????????????? const
 *  1. ?????? const ???????????????????????????????????????????????????
 *  2. ?????? const ????????????????????? const ?????? const ?????????????????????????????????
 *     const?????????
 *  3. ?????? const ?????????????????????????????????????????????????????????
 *
 *  ?????????????????????
 *  ????????????????????????
 */

/*
 *  ????????????????????????
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
 *  ????????????????????????
 *  ??????????????????????????????????????????:
 *  - ??????????????????????????????????????????????????????
 *  - ????????????????????????????????????????????????????????????????????????????????????
 *
 *  ???????????? 8.2.7
 */

/*
 *  ????????????
 *  ?????????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ?????????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ????????????
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
 *  ????????????
 *  ???????????????????????????????????????????????????????????????????????????????????????????????????
 *  ???????????????????????????????????????????????????
 *  ????????????????????????????????????????????????---?????????????????????????????????????????????
 *  ???????????????
 *
 *  ?????????????????????????????????????????????---???????????????????????????function signature???
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
 *  ???????????????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ???????????????????????????????????????????????????
 *
 *  ???????????????name decoration?????????????????????name mangling?????????????????????????????????
 *  ??????????????????????????????????????????????????????
 */

/*
 *  ???????????? --- ????????????????????????
 *  ????????????????????????????????????????????????????????????
 *  ????????? typename ??? class
 *
 *  ???????????????????????????????????????????????????????????????????????????????????????????????????????????????
 *  ??????????????????????????????????????????????????????????????????????????????????????? typename ?????????
 *  ??? class???
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
 *  ??????????????????
 *  ????????????????????????????????????????????????????????????
 */
