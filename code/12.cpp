#include <memory>

class HelperClass
{
  public:
  int a;
};

int func1(int a)
{
  return a;
}

int func2(const std::shared_ptr<HelperClass>& ptr)
{
  return ptr->a;
};

int main()
{

  int result = -1;

  // Hard to step in gdb with layout = src
  result = func1(func2(std::make_shared<HelperClass>()));

  return 0;
}

// g++ -g 12.cpp -std=c++17 -o 12


