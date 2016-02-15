#pragma once

#include <map>
#include <chrono>
#include <iostream>

class Timer
{
private:
  typedef std::map<std::string, std::chrono::system_clock::time_point> TimeMap;
  static TimeMap startTimeMap;

  Timer()
  {
  }

public:
  static void start(std::string message);
  static void end(std::string message);

  ~Timer()
  {
  }
};

