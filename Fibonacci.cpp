#include "Fibonacci.h"

using namespace std;

Fibonacci::Fibonacci(int n){
    if(n == 1)
      cout<<1;
    else{
      cout<<1<<","<<1;
      first_ = 1;
      second_ = 2;
      n -= 2;
      while(n--){
        cout<<",";
        nextF();
        //cout<<toStr(first)<<"("<<first<<")";
        cout<<toStr(first_);
      }
    }
    cout<<endl;
}

string Fibonacci::toStr(int num){
  string output = "";
  if(num % 3 == 0 || num % 5 == 0){
    if(num % 3 == 0)
      output += "Fizz";
    if(num % 5 == 0)
      output += "Buzz";
  }
  else{
    if(isPrime(num))
      output = "BuzzFizz";
    else
      output = to_string(num);
  }

  return output;
}

bool Fibonacci::isPrime(int n){
  int upper = sqrt(n);
  for(int i=2; i<=upper; i++) 
    if(n % i == 0)
      return false;
  return true;
}

void Fibonacci::nextF(){
    first_ += second_;
    swap(first_, second_);
}
