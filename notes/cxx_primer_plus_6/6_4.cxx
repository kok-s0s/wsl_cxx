#include <array>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#pragma warning(disable : 4996)
using namespace std;

void testString();
void instr2();
void instr3();
void strtype1();
void strtype4();
void structur();
void address();
void pointer();
void use_new();
void addpntrs();
void ptrstr();
void mixtypes();
void choices();
void code_1();

int main() {

  /*
   *    复合类型
   *
   *    数组（array），能够存储多个同类型的值。
   *    数组声明的三个要点：1. 存储在每个元素中的值的类型；2. 数组名；3.
   *数组中的元素数； typeName arrayName[arraySize];
   *    只有在定义数组时才能使用初始化，此后就不能使用了，也不能将一个数组赋给另一个数组。
   *
   *    字符串
   *
   *    每次读取一行字符串输入
   *    面向行的输入：cin.getline()
   *能读取整行，通过回车键的键入的换行符来确定输入结尾。
   *    该函数有两个参数，第一个参数是用来存储输入行的数组的名称，第二个参数是要读取的字符数。
   *
   *    面向行的输入：get() 有多个变体，其中一个变体和 getline() 类似
   *    推荐使用 get() 多过 getline()
   *
   *    cin.clear()
   *
   *    混合输入字符串和数字 (cin >> year).get() --- C++
   *程序常使用指针（而不是数组）来处理字符串。
   *
   *    C++ string 类
   *    ISO/ANSI C++98标准
   *
   *	 string 复制 1. 直接赋值；2. 使用 strcpy()
   *
   *	 结构
   */

  // testString();
  // cin.get();
  // cout << endl;
  // instr2();
  // cin.get();
  // cout << endl;
  // instr3();
  // cin.get();
  // cout << endl;
  // strtype1();
  // cin.get();
  // cout << endl;
  // strtype4();
  // cout << endl;
  // structur();
  // cout << endl;
  // address();
  // cout << endl;
  // pointer();
  // cout << endl;
  // use_new();
  // cout << endl;
  // addpntrs();
  // cout << endl;
  // ptrstr();
  // cout << endl;
  // mixtypes();
  // cout << endl;
  // choices();
  // cout << endl;

  // code_1
  code_1();
  cout << endl;

  /*

  ok! actually, i know how to use these, so i don't want to code anything about
  it.

  */

  cin.get();

  return 0;
}

void testString() {
  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++owboy";

  cout << "Howdy! I'm " << name2;
  cout << "! What's your name?\n";
  cin >> name1;
  cout << "Well " << name1 << ", your name has ";
  cout << strlen(name1) << " letters and is stored\n";
  cout << "in an array of  " << sizeof(name1) << " bytes.\n";
  cout << "Your initial is " << name1[0] << ". \n";
  name2[3] = '\0';
  cout << "Here are the first 3 characters of my name: ";
  cout << name2 << endl;
}

void instr2() {
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name: \n";
  cin.getline(name, ArSize);
  cout << "Enter your favorite dessert: \n";
  cin.getline(dessert, ArSize);
  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";
}

void instr3() {
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name:\n";
  cin.get(name, ArSize).get(); // read string, newline
  cout << "Enter your favorite dessert:\n";
  cin.get(dessert, ArSize).get();
  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";
}

void strtype1() {
  char charr1[20];
  char charr2[20] = "jaguar";
  string str1;
  string str2 = "panther";

  cout << "Enter a kind of feline: ";
  cin >> charr1;
  cout << "Enter another kind of feline: ";
  cin >> str1;
  cout << "Here are some felines: \n";
  cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
  cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
  cout << "The third letter in " << str2 << " is " << str2[2] << endl;
}

void strtype4() {
  char charr[20];
  string str;

  cout << "Length of string in charr before input: " << strlen(charr) << endl;
  cout << "Length of string in str before input: " << str.size() << endl;

  cout << "Enter a line of text:\n";
  cin.getline(charr, 20);
  cout << "Your entered: " << charr << endl;
  cout << "Enter another line of text:\n";
  getline(cin, str);
  cout << "Your entered: " << str << endl;
  cout << "Length of string in charr after input：" << strlen(charr) << endl;
  cout << "Length of string in str after input: " << str.size() << endl;
}

/*

结构体的学习，C++ 声明一个新的结构变量时可以省略前面的 struct 关键词
结构声明的位置很重要
C++不提倡使用外部变量，但提倡使用外部结构声明
将结构定义与变量声明分开，可以使程序更便于阅读和理解

*/

struct inflatable {
  char name[20];
  float volume;
  double price;
};

void structur() {
  inflatable guest{"kok-s0s", 1.88, 29.99};

  inflatable pal{"Aut", 3.12, 32.99};

  cout << "Expand you guest list with " << guest.name << " and " << pal.name
       << "!" << endl;
  cout << "You can have both for $" << (guest.price + pal.price) << endl;
}

/*

结构中的位字段 bit field

通常用于低级编程中

*/

/*

共用体（union）
C++ 中的数据格式，能够存储不同的数据类型，但只能存储其中一种类型；
用途: 当数据项使用两种或更多格式（但不会同时使用）时，可节省空间。

匿名共用体（anonymous union）

共用体常用于操作系统数据结构或硬件数据结构

*/

/*

枚举 enum
enumerator 枚举量
常被用来定义相关的符号常量

*/

/*

指针和自由存储空间
指针是一个变量，存储的是值的地址，而不是值本身
地址运算符 &
描述内存的表示法-----16进制表示法
C++内存管理编程理念的核心---指针策略
处理存储数据的新策略刚好相反，将地址视为指定的量，而将值视为派生量。一种特殊的变量---指针
指针可以说是C/C++整个生态独有的东西，利用好它可以节省空间，即节省内存。
注意Tips：在C++中，int* 是一种复合类型，是指向 int 的指针。
危险的一点：在C++创建指针时，计算机将分配用来存储地址的内存，但不会分配用来存储指针所指向的数据的内存。为数据提供空间是一个独立的步骤，忽略这一步无疑是自找麻烦。
使用指针的金科玉律：一定要在对指针应用解除引用运算符（*）之前，将指针初始化为一个确定的、适当的地址。
指针描述的是位置
------------------------------------------
使用 new 来分配内存
指针真正的用武之地：在运行阶段分配未命名的内存以存储值。
为一个数据对象（可以是结构、也可以是基本类型）获得并指定分配内存的格式如下：
typeName * pointer_name = new typeName;

在C++中，值为0的指针称为空指针（null pointer）

delete 运算符
释放指针指向的内存，但不会删除指针本身
一定要配对使用new和delete
警告：只能用 delete 来释放使用 new 分配的内存。然而，对空指针使用 delete
是安全的

使用 new 来创建动态数组
静态联编（static
binding）：在编译时给数组分配内存，意味着数组是在编译时加入到程序中的。
动态联编（dynamic binding）：程序将在运行时确定数组的长度。

使用 new 和 delete 时，应遵循以下规则：
1. 不要使用 delete 来释放不是 new 分配的内存
2. 不要使用 delete 释放同一个内存块两次
3. 如果使用 new [] 为数组分配内存，则应使用 delete [] 来释放
4. 如果使用 new [] 为一个实体分配内存，则应使用 delete（没有方括号）来释放
5. 对空指针应用 delete 是安全的

为数组分配内存的通用格式如下：
type_name * pointer_name = new type_name [num_elements];
--------------------------------------------
指针和数组基本等价的原因在于指针算术（pointer arithmetic）和 C++
内部处理数组的方式。 C++ 将数组名解释为地址
注意：将指针变量加1后，其增加的值等于指向的类型占用的字节数
--------------------------------------------
指针小结：
1. 声明指针
2. 给指针赋值
3. 对指针解除引用
4. 区分指针和指针所指向的值
5. 数组名
6. 指针算术
7. 数组的动态联编和静态联编
8. 数组表示法和指针表示法

*/

void address() {
  int counts = 6;
  double cups = 5.6;

  cout << counts << "----" << &counts << endl;
  cout << cups << "----" << &cups << endl;
}

void pointer() {
  int updates = 6;
  int *p_updates;
  p_updates = &updates;

  cout << "Values: updates = " << updates << ", *p_updates = " << *p_updates
       << endl;
  cout << "Addresses: &updates = " << &updates << ", p_updates = " << p_updates
       << endl;

  // use pointer to change value
  *p_updates = *p_updates + 1;
  cout << "Now updates = " << updates << endl;
}

void use_new() {
  int nights = 1001;
  int *pt = new int;
  *pt = 1001;

  cout << "night value = ";
  cout << nights << ": location " << &nights << endl;
  cout << "int ";
  cout << "value = " << *pt << ": location = " << pt << endl;

  double *pd = new double;
  *pd = 1000001.0;

  cout << "double ";
  cout << "value = " << *pd << ": location = " << pd << endl;

  cout << "size of pt = " << sizeof(pt) << "; size of *pt = " << sizeof(*pt)
       << endl;
  cout << "size of pd = " << sizeof(pd) << "; size of *pd = " << sizeof(*pd)
       << endl;
}

void addpntrs() {
  double wages[3] = {10000.0, 20000.0, 30000.0};
  short stacks[3] = {3, 2, 1};

  double *pw = wages;
  short *ps = &stacks[0];

  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  pw = pw + 1;
  cout << "add 1 to the pw pointer:" << endl;
  cout << "pw = " << pw << ", *pw = " << *pw << endl;

  cout << "ps = " << ps << ", *ps = " << *ps << endl;
  ps = ps + 1;
  cout << "add 1 to the ps pointer:" << endl;
  cout << "ps = " << ps << ", *ps = " << *ps << endl;

  cout << "access two elements with array notation" << endl;
  cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
  cout << "access two elements with pointer notation" << endl;
  cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1)
       << endl;

  cout << sizeof(wages) << " = size of wages array." << endl;
  cout << sizeof(pw) << " = size of pw pointer" << endl;
}

/*

指针和字符串
注意：在 cout 和多数 C++ 表达式中，char 数组名，char
指针以及用引号括起的字符串常量都被解释为字符串第一个字符的地址。
注意：在将字符串读入程序时，应使用已分配的内存地址。该地址可以是数组名，也可以是使用
new 初始化过的指针。

*/

void ptrstr() {
  char animal[20] = "bear";
  const char *bird = "wren";
  char *ps;

  cout << animal << " and " << bird << endl;

  cout << "Enter a kind of animal: ";
  cin >> animal;

  ps = animal;

  cout << ps << "!" << endl;

  cin.get();

  cout << "Before using strcpy():" << endl;
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl;

  ps = new char[strlen(animal) + 1];
  strcpy(ps, animal);
  cout << "After using strcpy():\n";
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl;
  delete[] ps;
}

/*

使用 new 创建动态结构

箭头成员运算符
如果结构标识符是结构名，则使用句点运算符；如果标识符是指向结构的指针，则使用箭头运算符；

*/

/*

根据分配内存的方式，C++ 有 3
种管理数据内存的方式：自动存储、静态存储和动态存储；
避免内存的泄露，最好同时使用 new 和 delete。

*/

/*

类型组合，就尽情发挥想象力吧。

*/

struct antarctica_years_end {
  int year;
};

void mixtypes() {
  antarctica_years_end s01, s02, s03;
  s01.year = 1998;
  antarctica_years_end *pa = &s02;
  pa->year = 1999;
  antarctica_years_end trio[3];
  trio[0].year = 2003;
  std::cout << trio->year << std::endl;
  const antarctica_years_end *arp[3] = {&s01, &s02, &s03};
  std::cout << arp[1]->year << std::endl;
  const antarctica_years_end **ppa = arp;
  auto ppb = arp;
  std::cout << (*ppa)->year << std::endl;
  std::cout << (*(ppa + 1))->year << std::endl;
}

/*

数组的替代品

模板类 vector --- 动态数组
vector<typeName> vt(n_elem);

模板类 array
array<typeName, n_elem> arr;

*/

void choices() {
  double a1[4] = {1.2, 2.4, 3.6, 4.8};
  vector<double> a2(4);
  a2[0] = 1.0 / 3.0;
  a2[1] = 1.0 / 5.0;
  a2[2] = 1.0 / 7.0;
  a2[3] = 1.0 / 9.0;
  array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
  array<double, 4> a4;
  a4 = a3;
  cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
  cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
  cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
  cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
  a1[-2] = 20.2;
  cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
  cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
  cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
}

/*

-----------------------------------------------------------------

*/

void code_1() {
  string first_name, last_name;
  cout << "What is your first name? " << endl;
  getline(cin, first_name);
  cout << "What is your last name? " << endl;
  getline(cin, last_name);
  char grade;
  cout << "What letter grade do you deserve? " << endl;
  (cin >> grade).get();
  int age;
  cout << "What is your age? " << endl;
  cin >> age;
  cout << "Name: " << last_name << ", " << first_name << endl;
  cout << "Grade：" << (char)((int)(grade + 1)) << endl;
  cout << "Age: " << age << endl;

  cin.get();
}

void code_2() {
  // i am lazy boy!
}