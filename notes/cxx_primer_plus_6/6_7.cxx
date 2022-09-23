// 真正的编程乐趣在于编写自己的函数

/*
  使用 C++ 函数的前提：1.提供函数定义 2.提供函数原型 3.调用函数


--- 超自然能力 <===> 纸牌游戏（彩票）--- 不碰赌博！
 */

#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

double harmonicMean(double, double);

void scoresInput(vector<double> &);

void scoresShow(vector<double>);

double scoresCompute(vector<double>);

void showBox(box);

void setVolume(box &);

long factorial(long);

int main() {
  // code_1
  //
  // int a, b;
  // do {
  //   cin >> a >> b;
  //   cout << harmonicMean(a, b) << endl;
  // } while (a != 0 && b != 0);

  // code_2
  //
  // vector<double> scores;
  // scoresInput(scores);
  // scoresShow(scores);
  // cout << scoresCompute(scores) << endl;

  // code_3
  //
  // box abox;
  // strcpy(abox.maker, "kok-s0s");
  // abox.height = 100;
  // abox.width = 50;
  // abox.length = 16;
  // abox.volume = 90;
  // showBox(abox);
  // setVolume(abox);
  // cout << abox.volume << endl;

  // code_4
  //
  // pass~~~

  // code_5
  // cout << factorial(0) << endl;
  // cout << factorial(1) << endl;
  // cout << factorial(2) << endl;
  // cout << factorial(3) << endl;
  // cout << factorial(4) << endl;

  // damn, I don't want to do the rest!

  return 0;
}

double harmonicMean(double x, double y) { return 2.0 * x * y / (x + y); }

void scoresInput(vector<double> &scores) {
  double tempScore;
  int i = 0;
  while (i < 10) {
    cin >> tempScore;
    if (tempScore == 0)
      break;
    scores.push_back(tempScore);
  }
}

void scoresShow(vector<double> scores) {
  for (auto score : scores) {
    cout << score << " " << endl;
  }
}

double scoresCompute(vector<double> scores) {
  double totalScore = 0;
  for (auto score : scores) {
    totalScore += score;
  }
  return totalScore / scores.size();
}

void showBox(box abox) {
  cout << abox.maker << endl;
  cout << abox.height << endl;
  cout << abox.width << endl;
  cout << abox.length << endl;
  cout << abox.volume << endl;
}

void setVolume(box &abox) {
  abox.volume = abox.height * abox.width * abox.length;
}

long factorial(long n) {
  if (n == 0)
    return 1;
  else
    return factorial(n - 1) * n;
}