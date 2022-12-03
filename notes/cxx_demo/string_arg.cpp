#include <iostream>
#include <string>

std::string mergePathArgs(std::string arg) { return arg.append("/"); }

template <typename... T>
std::string mergePathArgs(std::string& arg, T&... args) {
  std::string path;
  path = mergePathArgs(arg);
  path += mergePathArgs(args...);
  path.pop_back();
  return path;
}

int main() {
  // Lets make a test

  std::string s1 = "qwe";
  std::string s2 = "asd";

  std::string path = mergePathArgs(s1, s2);

  std::cout << s1 << std::endl << s2 << std::endl;

  std::cout << path << std::endl;

  return 0;
}