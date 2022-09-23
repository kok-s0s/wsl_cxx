#include <iostream>
using namespace std;

double getAstronmical(double);
void getTime(int, int);

int main() {
  /*
   *    结构化编程
   *    structured programming
   *
   *    自顶向下 top-down
   *
   *    OOP 面向对象编程
   *    C++真正的优点：可以方便地重用和修改现有的、经过仔细测试的代码
   *
   *    泛型编程（generic programming）
   *    OOP强调的是编程的数据方面，而泛型编程强调的是独立于特定数据类型。
   *    OOP是一个管理大型项目的工具，而泛型编程提供了执行常见任务的工具。
   *    术语泛型（generic）指的是创建独立于类型的代码。
   *
   *    OOP提供了高级抽象
   *    C提供了低级硬件访问
   *
   *    源代码--〉编译器--〉目标代码--〉链接程序--〉可执行代码
   *                                     |
   *                            启动代码 && 库代码
   *
   *    使用变量前必须声明它
   *    赋值将从右向左进行
   *
   *    cout 运算符重载
   *
   *     类之于对象就像类型之于变量
   *
   *    C++ 程序应当为程序中使用的每个函数提供原型
   *    函数原型之于函数就像变量声明之于变量---指出涉及的类型。
   *    原型只描述函数接口，描述的是发送给函数的信息和返回的信息；而定义中包含了函数的代码。
   *    库文件中包含了函数的编译代码，而头文件中则包含了原型。
   *    函数原型描述了函数接口，即函数如何与程序的其他部分交互。参数列表指出了何种信息将被传递给函数，函数类型指出了返回值的类型。
   *    程序员会将函数比作一个由出入它们的信息所指定的黑盒子（black boxes）
   *
   *    C++不允许将函数定义嵌套在另一个函数定义中。每个函数定义都是独立的，所有函数的创建都是平等的。
   *
   *    main()的返回值并不是返回给程序的其他部分，而是返回给操作系统，因为计算机操作系统（如UNIX或Windows）看作调用程序。
   *    约定是：退出值为0则意味着程序运行成功，为非零则意味着存在问题。
   *
   *    有意思的点：如果一个C++程序无法打开文件，可以将它设计为返回以一个非零值。然后，便可以设计一个外壳脚本或批处理文件来运行该程序，如果该程序发出指示失败的消息，则采取其他措施。
   *
   *    函数特性：1.有函数头和函数体；2.接受参数；3.返回值（非必要）；4.需要一个原型；
   *
   *    访问名称空间 std 的方式有四种（省略）
   *
   *    命名风格有助于保持一致性和精通性。精确让人一目了然的个人命名约定是良好的软件工程的标志。
   */

  // code_1
  cout << "My nickname is kok-s0s. I live in China!" << endl;

  // code_2
  int dist;
  cout << "please enter a distance : ";
  cin >> dist;
  cout << "this distance is " << dist * 220 << endl;

  // code_3
  // pass it. it's boring.

  // code_4
  int age;
  cout << "Enter your age: ";
  cin >> age;
  cout << "you have lived in the world about " << age * 12 << " months!"
       << endl;

  // code_5
  double celsiusValue;
  cout << "Please enter a Celsius value: ";
  cin >> celsiusValue;
  cout << celsiusValue << " degrees Celsius is " << (celsiusValue * 1.8 + 32.0)
       << " degrees Fahrenheit." << endl;

  // code_6
  double lightYear;
  cout << "Enter the number of light years: ";
  cin >> lightYear;
  cout << lightYear << " light years = " << getAstronmical(lightYear)
       << " astronomical units." << endl;

  // code_7
  int hours, minutes;
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  getTime(hours, minutes);

  return 0;
}

double getAstronmical(double x) { return x * 63240; }

void getTime(int hours, int minutes) {
  cout << hours << ":" << minutes << endl;
}
