#include<iostream>
#include<chrono>
#include<thread>

void func3()
{
  std::cout<< "func3()" << std::endl;
};

void func2()
{
  std::cout<< "func2()" << std::endl;
  func3();

  int a = 2;
};

void func1()
{
  std::cout<< "func1()" << std::endl;
  func2();

  int a = 1;
};

int main()
{
  while(true)
  {
    func1();
    std::this_thread::sleep_for(std::chrono::seconds(1));

    int a = 0;
  }

  return 0;
}

// g++ -g 11.cpp -std=c++17 -o 11
