#ifndef TIMER_HPP
#define TIMER_HPP

#include <time.h>
#include <assert.h>
#include <iostream>

#include "../../Model/Nodes/DoubleNode.hpp"


class Timer
{

public:
  Timer();
  void startTimer();
  void stopTimer();
  void resetTimer();
  void displayInformation();
  long getTimeInMicroseconds();
  
private:
  clock_t executionTime;
};

#endif
