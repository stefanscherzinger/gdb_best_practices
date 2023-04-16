#include <thread>
#include <chrono>
#include <iostream>

void thread2()
{
  int count2 = -1;
  for (;; ++count2)
  {
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
};

void thread3()
{
  int count3 = -1;
  for (;; ++count3)
  {
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
};

int main()
{
  std::thread t2 = std::thread(&thread2);
  t2.detach();
  std::thread t3 = std::thread(&thread3);
  t3.detach();

  int count1 = -1;
  for (;; ++count1)
  {
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }

  return 0;
}

// g++ -g 13.cpp --std=c++17 -pthread -o 13
