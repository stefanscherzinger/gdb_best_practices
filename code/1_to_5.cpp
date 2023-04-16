#include <vector>
#include <memory>

class My
{
public:
  int a = 0;
  int b = 1;
};

void func1(My& my)
{
  my.a = 1;
  my.b = 2;
}

void func2()
{
  const char* s = "hello world";
  for (int i = 0; i < 10; ++i)
  {
    int x = 5;
    double y = 5.5;
  }
};

int main()
{
  auto my = std::make_shared<My>();
  auto vec = std::vector<double>{0,1,2,3};

  func1(*my);

  func2();

  return 0;
}

// g++ -g 1_to_5.cpp -o 1_to_5
