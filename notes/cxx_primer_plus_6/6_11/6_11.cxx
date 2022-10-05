/*
  使用类
 */

/*
  运算符重载

  operator+()函数的名称使得可以使用函数表示法或运算符表示法来调用它。
  编译器将根据操作数的类型来确定如何做

  重载限制
 */

/*
  友元

  C++控制对类对象私有部分的访问
  公有类方法提供唯一的访问途径

  通过让函数成为类的友元，可以赋予该函数与类的成员函数相同的访问权限

  创建友元函数的第一步是将其原型放在类声明中，并在原型声明前加上关键字friend
  friend Time operator*(double m, const Time &t);   // goes in class declaration
  该原型意味着以下两点：
  1.虽然operator*()函数是在类声明中声明的，但它不是成员函数，因此不能使用成员运算符来调用
  2.虽然operator*()函数不是成员函数，但它与成员函数的访问权限相同。

  应将友元函数看作类的扩展接口的组成部分

  通过使用友元函数和类方法，可以用同一个用户接口表达这个两种操作

  只有类声明可以决定哪一个函数是友元，因此类声明仍然控制了哪些函数可以访问私有数据。

  类方法和友元只是表达类接口的两种不同机制

  如果要为类重载运算符，并将非类的项作为其第一个操作数，则可以用友元函数来反转操作数的顺序。
 */

/*
  重载运算符：作为成员函数还是非成员函数（友元函数）

  注意：非成员版本的重载运算符函数所需的形参数目与运算符使用的操作数数目相同；
  而成员版本所需的参数数目少一个，因为其中的一个操作数是被隐式地传递的调用对象。

  也要注意二义性错误
 */

/*
  类的自动转换和强制类型转换

  pass pass pass 不一定要掌握所有知识 用到再看
 */