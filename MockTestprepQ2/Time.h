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
		void getTime();
		void setTime();
		void showTime(); //May not be needed

		//Overloading the postfix increment operator
		Time operator++(int);

		friend ostream &operator << (ostream &output, Time &clk);
};

#endif