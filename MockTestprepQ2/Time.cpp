#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <ctime>

#include "Time.h"

using namespace std;

Time::Time(){
	hours = 0;
	minutes = 0;
}

Time::Time(int ihours, int iminutes){
	hours = ihours;
	minutes = iminutes;
}

Time::~Time(){

}

void Time::getTime(){  //Get time input from user -- accessor
	cout << "Please enter the number of hours in 24hr clock format " << endl;
	cin >> hours;

	cout << "Please enter the number of minutes in 24hr clock format " << endl;
	cin >> minutes;
}

void Time::setTime(){ //Used to check if time was entered in correct input

	if (((hours < 0) && (hours > 23)) && ((minutes < 0) && (minutes > 60)))
	{
		//reset the time
		hours = 0;
		minutes = 0;
		cout << "Incorrect Time input please try again " << endl;
		cin >> hours >> minutes;
	}
}

ostream &operator << (ostream &output, Time &clk) //No need for scope resolution due to friendship
{
	if ((clk.hours < 10) && (clk.minutes < 10))
	{
		output << '0' << clk.hours << ':' << '0' << clk.minutes;
	}

	else
	{
		output << clk.hours << ':' << clk.minutes;
	}
	return output;
};

Time Time::operator++(int)
{
	Time duplicate(*this);
	minutes++;
	return duplicate;
}

Time Time::checkOverflow()
{
	
	if (minutes > 59)
	{
		hours++;
		minutes = 0;
	}

	if (hours > 23)
	{
		hours = 0;
		minutes = 0;
	}

	return *this;
}