#include <iostream>
#include <string>

using std::string;

string mergePathArgs(string arg) { return arg.append("/"); }

string mergePathArgs(const char* arg) {
  string temp = arg;
  return temp.append("/");
}

template <typename... T>
string mergePathArgs(string& arg, T&... args) {
  string path;
  path = mergePathArgs(arg);
  path += mergePathArgs(args...);
  if (path[path.size() - 1] == '/') path.pop_back();
  return path;
}

template <typename... T>
string mergePathArgs(const char* arg, T&... args) {
  string path;
  path = mergePathArgs(arg);
  path += mergePathArgs(args...);
  if (path[path.size() - 1] == '/') path.pop_back();
  return path;
}

int main() {
  // Lets make a test

  string s1 = "qwe";
  string s2 = "A.json";

  string path = mergePathArgs(s1, s1, s1, s1, s2);

  std::cout << path << std::endl;

  return 0;
}