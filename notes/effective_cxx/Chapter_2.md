# 构造/析构/赋值运算
> Constructors, Destructors, and Assignment Operators

## 条款 05：了解 C++ 默默编写并调用哪些函数
> Know what functions C++ silently writes and calls

类：

1. `default` 构造函数
2. 析构函数
3. copy 构造函数
4. copy assigment 操作符

**Remember**

- 编译器可以暗自为 class 创建 default 构造函数、copy 构造函数、copy assignment 操作符，以及析构函数。

## 条款 06：若不想使用编译器自动生成的函数，就该明确拒绝
> Explicitly disallow the use of compiler-generated functions you do not want.

**Remember**

- 为驳回编译器自动（暗自）提供的机能，可将相应的成员函数声明为 private 并且不予实现。使用像 Uncopyable 这样的 base class 也是一种做法。

## 条款 07：为多态基类声明 virtual 析构函数
> Declare destructors virtual in polymorphic base classes.

**Remember**

- polymorphic（带多态性质的）base classes 应该声明一个 virtual 析构函数。如果 class 带有任何 virtual 函数，它就应该拥有一个 virtual 析构函数。
- Classes 的设计目的如果不是作为 base classes 使用，或不是为了具备多态性（polymorphically），就不该声明 virtual 析构函数。

## 条款 08：别让异常逃离析构函数
> Prevent exceptions from leaving destructors.

**Remember**

- 析构函数绝对不要吐出异常。如果一个被析构函数调用的函数可能抛出异常，析构函数应该能捕捉任何异常，然后吞下它们（不传播）或结束程序。
- 如果客户需要对某个操作函数运行期间抛出的异常做出反应，那么 class 应该提供一个普通函数（而非在析构函数中）执行该操作。

## 条款 09：绝不让构造和析构过程中调用 virtual 函数
> Never call virtual functions during construction or destruction.

**Remember**

- 在构造和析构期间不要调用 virtual 函数，因为这类调用从不下降至 derived class（比起当前执行构造函数和析构函数的那层）。

## 条款 10：令 operator= 返回一个 reference to *this
> Have assignment operators return a reference to *this.

**Remember**

- 令赋值（assigment）操作符返回一个 reference to *this。

## 条款 11：在 operator= 中处理 “自我赋值”
> Handle assigment to self in operator=.

别名

**Remember**

- 确保当对象自我赋值时 operator= 有良好行为。其中技术包括比较 “来源对象” 和 “目标对象” 的地址、精心周到的语句顺序、以及 copy-and-swap。
- 确定任何函数如果操作一个以上的对象，而其中多个对象是同一个对象时，其行为仍然正确。

## 条款 12：复制对象时勿忘其每一个成分
> Copy all parts of an object.

OO-systems 设计良好之面向对象系统

**Remember**

- Copying 函数应该确保复制 “对象内的所有成员变量” 及 “所有 base class 成分”。
- 不要尝试以某个 copying 函数实现另一个 copying 函数。应该将共同机能放进第三个函数中，并由两个 copying 函数共同调用。