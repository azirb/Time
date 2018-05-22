#pragma once
#include <string>
#include <iostream>
using namespace std; 
class Time
{
private : 
	string str; 
	int Hour, Minute, Second; 
	int seconds; 
public:
	void set_seconds(int); 
	int get_seconds(); 
	void set_HMS(int,int,int); 
	string get_time(); 
	void to_seconds(); 
	void minus_sec(int); 
	void time_plus_sec(int);
	void time_minus_sec(int);
	bool equal(Time); 
	void to_minute(); 
	void typeall(); 
};