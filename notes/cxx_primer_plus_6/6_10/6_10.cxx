// 对象和类

/*
  面向对象编程（OOP）是一种特殊的、设计程序的概念性方法，C++通过一些特性改进了C语言，使得应用
  这种方法更容易。

  最重要的OOP特性：
  1. 抽象；
  2. 封装和数据隐藏；
  3. 多态；
  4. 继承；
  5. 代码的可重用性；
 */

/*
  作为OOP程序员，首先考虑数据，不仅要考虑如何表示数据，还要考虑如何使用数据；

  初始化、更新和报告 --- 用户接口

  采用OOP方法时，首先从用户的角度考虑对象---描述对象所需的数据以及描述用户与数据交互所需的操作。
  完成对接口的描述后，需要确定如何实现接口和数据存储。最后，使用新的设计方案创建出程序。
 */

/*
  生活中充满了复杂性，处理复杂性的方法之一是简化和抽象。

  抽象是通往用户定义类型的捷径，在C++中，用户定义类型指的是实现抽象接口的类设计。

  类是一种将抽象转换为用户定义类型的C++工具，它将数据表示和操纵数据的方法组合成一个整洁的包。
 */

/*
  什么是接口？

  接口是一个共享框架，供两个系统（如在计算机和打印机之间或者用户或计算机程序之间）交互时使用；

  对于类，我们说公共接口。在这里，公众（public）是使用类的程序，交互系统由类对象组成，而接口
  由编写类的人提供的方法组成。接口让程序员能够编写与类对象交互的代码，从而让程序能够使用类对象。

  类设计禁止公共用户直接访问类，但可以调用它的公共方法（用户和类对象之间的公共接口的组成部分）。
 */

/*
  类名首字母大写

  公有成员函数是程序和对象的私有成员之间的桥梁，提供了对象和程序之间的接口。
  防止程序直接访问数据被称为数据隐藏。

  类设计尽可能将公有接口与实现细节分开。公有接口表示设计的抽象组件。
  将实现细节放在一起并将它们与抽象分开被称为封装。
  数据隐藏（将数据放在类的私有部分中）是一种封装，将实现的细节隐藏在私有部分。

  数据隐藏不仅可以防止直接访问数据，还可让开发者（类的用户）无需了解数据是如何被表示的。
  从使用类的角度看，使用哪种方法没有什么区别，所需要知道的只是各种成员函数的功能；也就是说，
  需要知道成员函数接受什么样的参数以及返回什么类型的值。原则是将实现细节从接口设计中分离出来。
  如果以后找到了更好的、实现数据表示或成员函数细节的方法，可以对这些细节进行修改，而无需修改
  程序接口，这使程序维护起来更容易。

  默认 private，但为了强调数据隐藏的概念，建议显式地使用 private。
 */

/*
  类描述看上去很像是包含成员函数以及 public 和 private 可见性标签的结构声明。

  实际上，C++对结构进行了扩展，使之具有与类相同的特性。它们之间的唯一的区别是，结构的默认访问类型是
  public，而类为 private。

  C++
  程序员通常使用类来实现类描述，而把结构限制为只表示纯粹的数据对象（常被称为普通老式数据（POD，Plain
  Old Data）结构）
 */

/*
  类成员函数 两个特殊的特征：
  1. 定义成员函数时，使用作用域解析运算符（::）来标识函数所属的类；
  2. 类方法可以访问类的 private 组件；

  调用成员函数时，它将使用被用来调用它的对象的数据成员。
 */

/*
  OOP 程序员常依照客户/服务器模型来讨论程序设计。
  这个概念中，客户是使用类的程序；类声明（包括类方法）构成了服务器，它是程序可以使用的资源。

  客户只能通过以公有方式定义的接口使用服务器，这意味着客户（客户程序员）唯一的责任时了解该接口。
  服务器（服务器设计人员）的责任是确保服务器根据该接口可靠并准确地执行。服务器设计人员只能修改类设计
  的实现细节，而不能修改接口。这样程序员独立地对客户和服务器进行改进，对服务器的修改不会对客户的行为造成
  意外的影响。
 */

/*
  类的构造函数和析构函数

  程序不能直接访问数据成员
  程序只能通过成员函数来访问数据成员

  一般来说，最好是在创建对象时对它进行初始化。

  默认构造函数是在未提供显式初始值时，用来创建对象的构造函数。

  在设计类时，通常应提供对所有类成员做隐式初始化的默认构造函数

  析构函数完成清理工作。

  C++11 列表初始化

  const 成员函数 -- 只要类方法不修改调用对象，就应将其声明为 const。
 */

/*
  this 指针

  this 指针指向用来调用成员函数的对象（this 被作为吟唱参数传递给方法）
 */

/*
  对象数组
 */

/*
  类作用域

  在类中定义常量的方式 --- 使用关键字 static
*/

/*
  抽象数据类型 abstract data type --- ADT
*/

/*
  面向对象编程强调的是程序如何表示数据。

  使用OOP方法解决编程问题的第一步是根据它与程序之间的接口来描述数据，从而指定如何使用数据。
  然后，设计一个类来实现该接口。一般来说，私有数据成员存储信息，公有成员函数（又称为方法）提供访问数据的唯一途径。
  类将数据和方法组合成一个单元，其私有性实现数据隐藏。
 */