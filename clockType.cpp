// ============================================================================
//                            IMPLEMENTATION FILE (797)
//=============================================================================


#include <iostream>
#include "clockType.h"
using namespace std;



// ============================================================================
//                            PROTOTYPES
//=============================================================================
void clockType::setTime ( int hours, int minutes, int seconds ) {
  if ( 0 <= hours && hours < 24 ) {
    hr = hours;
  } else {
    hr = 0;
  }

  if ( 0 <= minutes && minutes < 60 ) {
    min = minutes;
  } else {
    min = 0;
  }

  if ( 0 <= seconds && seconds < 60 ) {
    sec = seconds;
  } else {
    sec = 0;
  }
}

void clockType::getTime ( int& hours, int& minutes, int& seconds ) const {
  hours = hr;
  minutes = min;
  seconds = sec;
}

void clockType::printTime() const {
  if ( hr < 10 ) {
    cout << "0";
  }
  cout << hr << ":";

  if ( min < 10 ) {
    cout << "0";
  }
  cout << min << ":";

  if ( sec < 10 ) {
    cout << "0";
  }
  cout << sec;
}

void clockType::incrementHours() {
  hr++;
  if ( hr > 23 ) {
    hr = 0;
  }
}

void clockType::incrementMinutes() {
  min++;
  if ( min > 59 ) {
    min = 0;
    incrementHours();  //  increment hours
  }
}

void clockType::incrementSeconds() {
  sec++;
  if ( sec > 59 ) {
    sec = 0;
    incrementMinutes();  // increment minutes
  }
}

bool clockType::equalTime( const clockType& otherClock ) const {
  return ( hr == otherClock.hr
           && min == otherClock.min
           && sec == otherClock.sec );
}

clockType::clockType() {
    hr = 0;
    min = 0;
    sec = 0;
}
// MY ADDITIONAL PROTOTYPES

/// @breif  sets only the hours
///@param hours
void clockType::setHours ( int hours ) {
  if ( 0 <= hours && hours < 24 ) {
    hr = hours;
  } else {
    hr = 0;
  }
}
/// @breif  sets only the minutes
///@param  minutes
void clockType::setMinutes ( int minutes ) {
  if ( 0 <= minutes && minutes < 60 ) {
    min = minutes;
  } else {
    min = 0;
  }
}
/// @breif  sets only the seconds
///@param  seconds
void clockType::setSeconds ( int seconds ) {
  if ( 0 <= seconds && seconds < 60 ) {
    sec = seconds;
  } else {
    sec = 0;
  }
}
/// @breif  return the amount of hours on clock
///@param  n/a
int clockType::getHours() const { 
  return hr;
}
/// @breif  returns the amount of minutes on clock
///@param  n/a
int clockType::getMinutes() const {
  return min;
}
/// @breif  returns the amount of seconds on clock
///@param  n/a
int clockType::getSeconds() const {
  return sec;
}
/// @breif  returns the total time passed in day in seconds
///@param  n/a
int clockType::elapsedTime() const {
  int sec_in_hour = 60 * 60;  // amound of seconds in one hour
  int sec_in_min = 60;  // amount of seconds in one minute

  return ( (hr * sec_in_hour) + (min * sec_in_min) + sec );
}
/// @breif  returns the time left in the day in seconds
///@param  n/a
int clockType::remainingTime() const {
  int secInDay = 3600 * 24;  // total seconds in a day

  return ( secInDay - elapsedTime() );
}
/// @breif  compares the Difference of a new clock to the current clock
///@param  new clock of clockType to compare
void clockType::difference( const clockType& other) const {
  int clock_1_timing = ( getHours() * 3600 ) + ( getMinutes() * 60 )
                   + getSeconds();  // converts clock_1's details into seconds
  int clock_2_timing = ( other.getHours() * 3600 ) + ( other.getMinutes() * 60 )
                   + other.getSeconds();  // converts clock_2's details into
                                          // seconds
  /*
    how to compare:
    1) get total time in seconds
    2) subtract clock_1 - clock_2
    3) do some math to get the hr, minutes, seconds
    4) spit out results
  */
  int sec_in_hour = 60 * 60;  // amound of seconds in one hour
  int sec_in_min = 60;  // amount of seconds in one minute

  int difference = ( clock_1_timing - clock_2_timing );  // diff. between
                                                         // clock 1 and 2
  int to_positive = difference < 0 ? ( difference * -1 ) : difference;  // make
                                                                        // diff
                                                                        // pos.
                                                                        // if
                                                                        // needed

  int dif_hours = to_positive / sec_in_hour;  // finds hours
  int seconds_from_hour = to_positive - ( dif_hours * sec_in_hour );  // left
                                                                      // seconds
                                                                      // in hour
  int dif_minutes = seconds_from_hour / sec_in_min;  // finds minutes
  int dif_seconds = seconds_from_hour - ( dif_minutes * sec_in_min );  // finds
                                                                       // seconds

  // hr:min:sec
  cout << dif_hours << ":" << dif_minutes << ":" << dif_seconds << endl;
}
