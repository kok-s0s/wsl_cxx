// mytime2.h -- Time class before operator overloading
#ifndef MYTIME2_H_
#define MYTIME2_H_

class Time {
 private:
  int hours;
  int minutes;

 public:
  Time();
  Time(int h, int m = 0);
  void AddMin(int m);
  void AddHr(int h);
  void Reset(int h = 0, int m = 0);
  Time operator+(const Time &) const;
  Time operator-(const Time &) const;
  Time operator*(double) const;
  void Show() const;
};

#endif