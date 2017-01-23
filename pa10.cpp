/// @author Arin Arjani
/// @note pa10
/// @file pa10.cpp
/// @version 2016-05-07
/// @brief  1)  set the hours, minutes, or seconds
///         2)  retrieve only the hours, minutes, or seconds
///         3)  return the elapsed time of the day of a clock in seconds
///         4)  return the remaining time of the the day of a clock in seconds
///         5)  determine and output how far apart in time two clocks are in
///             the form hr:min:sec

#include <iostream>
#include "clockType.h"
using namespace std;

int main() {
  // create clocks
  clockType clock_1;  // clock_1
  clockType clock_2;  // clock_2

  // fill clocks
  clock_1.setHours(5);
  clock_1.setMinutes(4);
  clock_1.setSeconds(30);
  int c1_hr = clock_1.getHours();  // clock_1's hours
  int c1_min = clock_1.getMinutes();  // clock_1's minutes
  int c1_sec = clock_1.getSeconds();  // clock_1's seconds
  int c1_elapsed = clock_1.elapsedTime();  // clock_1's elapsed time
  int c1_remaining = clock_1.remainingTime();  // clock_1's remaining time
  clock_2.setHours(4);
  clock_2.setMinutes(3);
  clock_2.setSeconds(6);
  int c2_hr = clock_2.getHours();  // clock_2's hours
  int c2_min = clock_2.getMinutes();  // clock_2's minutes
  int c2_sec = clock_2.getSeconds();  // clock_2's seconds
  int c2_elapsed = clock_2.elapsedTime();  // clock_2's elapsed time
  int c2_remaining = clock_2.remainingTime();  // clock_2's remaining time

  // output the hours, minutes, seconds, elasped time, and remaining seconds
  cout << "Clock 1's hours: " << c1_hr << endl;
  cout << "Clock 1's minutes: " << c1_min << endl;
  cout << "Clock 1's seconds: " << c1_sec << endl;
  cout << "Clock 1's elasped time: " << c1_elapsed << endl;
  cout << "Clock 1's remaining time: " << c1_remaining << endl;
  cout << "----------------------------------------------------" << endl;
  cout << "Clock 2's hours: " << c2_hr << endl;
  cout << "Clock 2's minutes: " << c2_min << endl;
  cout << "Clock 2's seconds: " << c2_sec << endl;
  cout << "Clock 2's elasped time: " << c2_elapsed << endl;
  cout << "Clock 2's remaining time: " << c2_remaining << endl;

  // differences
  cout << "Difference between Clock 1 and Clock 2 in hr:min:sec: ";
  clock_1.difference(clock_2);


  return 0;
}
