/**
 * @file lab3_3.cpp
 * @author Adia Hite (ahite@nic.edu)
 * @brief This program will convert seconds read from user 
 *        into days, hours, minutes, and seconds.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    // define variables
    int secondsInput = 0,
        seconds = 0,
         minutes = 0,
         hours = 0,
         days = 0;
    
    // ask user for input (seconds)
    cout << "Enter time in seconds: ";
    cin >> secondsInput;

    // calculate seconds to days, hours, minutes, and seconds format
    seconds = secondsInput % 60;
    minutes = secondsInput / 60 % 60;
    hours = secondsInput / 60 / 60 % 24;
    days = secondsInput / 60 / 60 / 24;

    // output results
    cout << secondsInput << " seconds is equivalent to "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, and "
         << seconds << " seconds.\n";


    return 0;
}