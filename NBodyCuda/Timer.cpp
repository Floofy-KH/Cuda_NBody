#include "Timer.h"

Timer::TimeMap Timer::startTimeMap;

void Timer::start(std::string message)
{
  if (startTimeMap.find(message) == startTimeMap.cend())
  {
    startTimeMap[message] = std::chrono::system_clock::now();
    std::cout << "Timer started: \"" << message.c_str() << "\"" << std::endl;
  }
  else
  {
    std::cout << "Timer with identifier: \"" << message.c_str() << "\" already exists." << std::endl;
  }
}

void Timer::end(std::string message)
{
  if (startTimeMap.find(message) == startTimeMap.cend())
  {
    std::cout << "Timer with identifier: \"" << message.c_str() << "\" not found." << std::endl;
  }
  else
  {
    double duration = std::chrono::duration<double>(std::chrono::system_clock::now() - startTimeMap[message]).count();
    std::cout << "Timer ended: \"" << message.c_str() << "\". Duration = " << duration << " seconds." << std::endl;
    startTimeMap.erase(message);
  }
}