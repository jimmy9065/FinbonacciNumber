#include<iostream>
#include<cmath>

#ifndef FIBONACCI
#define FIBONACCI
class Fibonacci{
public:
  Fibonacci(int n);
private:
  std::string toStr(int num);
  bool isPrime(int n);
  void nextF();
  int first_, second_;
};

#endif
