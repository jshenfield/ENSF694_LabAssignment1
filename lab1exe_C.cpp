 /*
 *  lab1exe_C.cpp
 *  ENSF 694 Lab 1 Exercise C
 *  Completed by: Jack Shenfield
 *  Development Date: July 3rd, 2025
 */

#include <iostream>
using namespace std;

void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr);
/*
 * Converts time in milliseconds to time in minutes and seconds.
 * For example, converts 123400 ms to 2 minutes and 3.4 seconds.
 * REQUIRES:
 *    ms_time >= 0.
 *    minutes_ptr and seconds_ptr point to variables.
 * PROMISES:
 *    0 <= *seconds_ptr & *seconds_ptr < 60.0
 *    *minutes_ptr minutes + *seconds_ptr seconds is equivalent to
 *    ms_time ms.
 */

int main(void)
{
  int millisec;
  int minutes;
  double seconds;
    
  cout << "Enter a time interval as an integer number of milliseconds: ";
  
 // printf("Enter a time interval as an integer number of milliseconds: ");
  cin >> millisec;
  
  if (!cin) {
    cout << "Unable to convert your input to an int.\n";
    exit(1);
  }
  
  cout << "Doing conversion for input of " <<  millisec <<" milliseconds ... \n", millisec;

  /* MAKE A CALL TO time_convert HERE. */
  time_convert(millisec, &minutes, &seconds);
  cout << "That is equivalent to " << minutes << " minute(s) and " << seconds << " second(s).\n";
  return 0;
}

/* PUT YOUR FUNCTION DEFINITION FOR time_convert HERE. */

void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr){

  double seconds = (double)(ms_time/1000); // seconds is the milliseconds divided by 100
  int minutes = seconds/60; // number of minutes is the seconds/60 with no remainder
  seconds = seconds - minutes*60; // new seconds value, finds the remainder

  *minutes_ptr = minutes; // call back to pointer
  *seconds_ptr = seconds; // call back to pointer
}