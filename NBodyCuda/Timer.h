#pragma once

#include <chrono>
#include <iostream>

class Timer
{
private:
  std::chrono::system_clock::time_point m_start;
  std::string m_message;

public:
  Timer() : m_start(std::chrono::system_clock::now()), m_message("")
  {
  }

  void start(std::string message);
  void end();

  ~Timer()
  {
  }
};

