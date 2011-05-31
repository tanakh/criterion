#include "criterion.h"

using namespace std;

int fib(int n)
{
  if (n<=1) return n;
  return fib(n-1) + fib(n-2);
}

int main(int argc, char *argv[])
{
  bgroup("fib") {
    bench("10")
      fib(10);
    bench("35")
      fib(35);
    bench("37")
      fib(37);
  }
  return 0;
}
