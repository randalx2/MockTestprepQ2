// ***** QUESTION 2 *****
// Question 2 consists of 3 parts
// 2.1  Create a class "Time" which implements a 24hr clock in the format hh:mm   
//      Include default constructor, destructor, accessor and mutator (see how they are used in main to
//      determine the format required.
//      Put the declaration and definition in appropriate files! 
// 2.2  Overload the stream insertion operator for your class to print the time in format hh:mm 
// 2.3  Overload the POSTFIX increment operator to increment the minutes (include carry if needed)

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <cstdio>

#include "Time.h"

using namespace std;

int main(){

	Time c = Time(); //create default time object

	//User sets time
	c.getTime();
	c.setTime();

	//Show time entered by user
	cout << c << endl;

	cout << endl;
	cout << "Now demos of minute increments " << endl;

	//Show incrementing of minutes

	for (int i = 0; i < 120; i++)  //Looping to demonstrate code
	{
		c++;
		c.checkOverflow();
		cout << c << endl;
	}
	
	system("PAUSE");
	return 0;
}