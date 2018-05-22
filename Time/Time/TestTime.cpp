#include "Time.h"
#include <iostream>
using namespace std; 

int main()
{
	Time r,_r; 
	r.set_HMS(2, 15, 59);
	_r.set_HMS(2, 16, 59); 
	r.typeall(); 
	r.to_seconds(); 
	r.time_minus_sec(5); 
	r.typeall(); 
	r.time_plus_sec(10); 
	r.typeall(); 
	r.to_minute(); 
	if (r.equal(_r) == true)
	{
		cout << "ravni "; 
	}
	else
	{
		cout << "net "; 
	}
	system("pause"); 
	return 0;
}