//  内存模型和名称空间

/*
  单独编译

  C++ 鼓励程序员将组件函数放在独立的文件中；

  C++ 编译器即编译程序，也管理链接器；

  集成开发环境

  将程序分为三部分：
  1. 头文件：包含结构声明和使用这些结构的函数的原型。
  2. 源代码文件：包含与结构有关的函数的代码。
  3. 源代码文件：包含调用与结构有关的函数的代码。

  头文件中常包含的内容：
  1. 函数原型
  2. 使用 #define 或 const 定义的符号常量
  3. 结构声明
  4. 类声明
  5. 模板声明
  6. 内联函数

  在同一个文件中只能将同一个头文件包含一次

  基于预处理器编译指令 #ifndef（即 if not defined），该为一种标准的C/C++技术
  可以避免多次包含同一个头文件。但是这种方法并不能防止编译器将文件包含两次，
  而只是让它忽略除第一次包含之外的所有内容。大多数标准 C 和 C++ 头文件都使用
  这种防护（guarding）方案。否则，可能在一个文件中定义同一个结构两次，这将导
  致编译错误。

  多个库的链接（不同的编译器生成的二进制模块（对象代码文件）不同）
 */

/*
  存储持续性、作用域和链接性

  C++（C++11以上）使用四种不同的方案来存储数据，方案的区别在于数据保留在内存中的时间
  1. 自动存储持续性
  2. 静态存储持续性
  3. 线程存储持续性
  4. 动态存储持续性
 */

/*
  名称空间

  namespace
  using
 */