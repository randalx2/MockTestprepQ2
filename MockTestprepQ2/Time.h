#pragma once
#ifndef TIME_H
#define TIME_H
#include <string>
#include <cstdio>

using namespace std;

//Declaring Class Prototype
class Time {
private: int hours, minutes;

public: Time(); //Default Constructor
		Time(int, int); //Overloading constructor
		~Time(); //Default Destructor
		void getTime(int, int);
		void setTime(int, int);
		void showTime();

		//Declaring overloading method of stream insertion operator to show time
		friend ostream &operator << (ostream &output, Time &clk);

		//Overloading the postfix increment operator
		Time operator++(int);
};

#endif