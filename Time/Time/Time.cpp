#include "Time.h"
#include <iostream>
#include <stdlib.h>  
using namespace std; 

void Time::set_HMS (int _h,int _m , int _s)
{
	Hour = _h; 
	Minute = _m; 
	Second = _s; 
	str = "<" + to_string(Hour) + ":" + to_string(Minute) + ":" + to_string(Second) + ">";
	seconds = Hour * 60 * 60 + Minute * 60 + Second; 
}

void Time::set_seconds(int _s)
{
	Second = _s; 
}

int Time::get_seconds()
{
	return Second; 
}

string Time::get_time()
{
	return str;
}

void Time::to_seconds()
{
	seconds = seconds = Hour * 60 * 60 + Minute * 60 + Second;
}

void Time::minus_sec(int _sec)
{
	seconds -= _sec; 
}

void Time::time_plus_sec(int _sec)
{
	seconds += _sec; 
	Hour = seconds / (60 * 60);
	Minute = (seconds % (60 * 60)) / 60;
	Second =  ((seconds % (60 * 60)) % 60);
	if (Second >= 60)
	{
		Second = 0; 
		Minute++;
	}
}

void Time::time_minus_sec(int _sec)
{
	seconds -= _sec;
	Hour = seconds / (60 * 60);
	Minute = (seconds % (60 * 60)) / 60;
	Second = ((seconds % (60 * 60)) % 60);
}

bool Time::equal(Time _r)
{
	if (Hour==_r.Hour && Minute ==_r.Minute && Second == _r.Second)
		return true;
	else
		return false; 
}

void Time::to_minute()
{
	Minute = Hour * 60 + Second/60;
}


void Time :: typeall()
{
	cout << str << endl; 
}