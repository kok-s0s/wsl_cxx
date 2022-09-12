# 让自己习惯 C++
> Accustoming Yourself to C++

## 条款 01：视 C++ 为一个语言联邦
> View C++ as a federation of languages.

C++ 最初的名称 C with Classes

C++ 其主要的次语言：

- C
- Object-Oriented C++
- Template C++
- STL

**Remember**

- C++ 高效编程守则视状况而变化，取决于你使用 C++ 的哪一部分

## 条款 02：尽量以 const，enum，inline 替换 #define
> Prefer consts,enums,and inlines to #define.

用常量替换一个宏

enum hack

**Remember**

- 对于单纯常量，最好以 const 对象或 enums 替换 #define
- 对于形似函数的宏（macros），最好改用 inline 函数替换 #defines

## 条款 03：尽可能使用 const **重点关注**
> Use const whenever possible.

const 允许指定一个语义（也就是指定一个“不该被改动”的对象），而编译器会强制实施这项约束。

const 成员函数

改善 C++ 程序效率的一个根本办法是以 `pass by reference-to-const` 方式传递对象

**Remember**

- 将某些东西声明为 const 可帮助编译器侦测出错误用法。const 可被施加于任何作用域内的对象、函数参数、函数返回类型、成员函数本体。
- 编译器强制实施 bitwise constness，但你编写程序时应该使用“概念上的常量性”（conceptual constness）。
- 当 const 和 **non**-const 成员函数有着实质等价的实现时，令 **non**-const 版本调用 const 版本可避免代码重复。

## 条款 04：确定对象被使用前已先被初始化
> Make sure that objects are initialized before they're used.

读取未初始化的值会导致不明确的行为

永远在使用对象之前先将它初始化

确保每一个构造函数都将对象的每一个成员初始化

**Remember**

- 为内置型对象进行手工初始化，因为 C++ 不保证初始化它们。
- 构造函数最好使用成员初值列（member initialization list），而不要在构造函数本体内使用赋值操作（assignment）。初值列列出的成员变量，其排列次序应该和它们在 class 中的声明次序相同。
- 为免除“跨编译单元之初始化次序”问题，请以 local static 对象替换 non-local static 对象。
