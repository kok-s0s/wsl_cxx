// mytime3.h -- Time class with friends
#ifndef MYTIME3_H_
#define MYTIME3_H_

#include <iostream>

class Time {
 private:
  int hours;
  /// @brief 分钟
  int minutes;

 public:
  /// @brief 初始化
  Time();
  Time(int h, int m = 0);
  void AddMin(int m);
  void AddHr(int h);
  void Reset(int h = 0, int m = 0);
  Time operator+(const Time &) const;
  Time operator-(const Time &) const;
  Time operator*(double) const;
  void Show() const;
  friend Time operator*(double m, const Time &t) { return t * m; }
  friend std::ostream &operator<<(std::ostream &os, const Time &t);
};

#endif
