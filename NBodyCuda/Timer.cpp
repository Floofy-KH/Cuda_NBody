#include "Timer.h"

void Timer::start(std::string message)
{
  std::cout << "Timer started: \"" << message.c_str() << "\"" << std::endl;
  m_message = message;
  m_start = std::chrono::system_clock::now();
}

void Timer::end()
{
  double duration = std::chrono::duration<double>(std::chrono::system_clock::now() - m_start).count();
  std::cout << "Timer ended: \"" << m_message.c_str() << "\". Duration = " << duration << " seconds." << std::endl;
}