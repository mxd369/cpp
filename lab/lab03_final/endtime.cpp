/*
endtime.cpp:

Write a program to read two integers with the following significance. The first integer value represents a time of day on a 24 hour clock, so that 1245 represents quarter to one mid-day, for example.

The second integer represents a time duration in a similar way, so that 345 represents three hours and 45 minutes.

This duration is to be added to the first time, and the result printed out in the same notation, in this case 1630 which is the time 3 hours and 45 minutes after 12.45.

Enter in a start time: 	1415
Enter in a duration: 	50
End time is: 			1505

piazza-note: midnight = 0000
*/
#include<iostream>
using namespace std;
int the_time(int time);			// Function prototype (declaration) need return
void display_time(int time);	// Function prototype (declaration) void
int main() {
	int time, duration;
	cout << "Enter in a start time: ";
	cin >> time;
	cout << "Enter in a duration: ";
	cin >> duration;
	time = the_time(time);
	time = the_time(time + duration); 
	cout << "End time is: ";
	display_time(time);
	return 0;
}
// need to do minutes, hours, 2 12 hour cycles, and format
int the_time(int time){
	// compute minutes
	int min = time % 100;
	// compute hours
	int hour = time / 100;
	if(min >= 60)
		{ min -= 60; hour++;}
	// account for 12 and 24
	hour %= 24;
	time = (hour * 100) + min;
	return time;
}
// need to do the correct 0000 00 and 0 format
void display_time(int time){
	if(time < 60){ cout << "00"; if(time < 10) cout << "0";
	}
	else if((time / 100) < 10) cout << "0";
	else if((time / 100) == 0) cout << "00";
	cout << time << endl;
}
/*
	0000 = 0 minute			1200 AM
	0001 = 1 minute			1201 AM
	0002 = 2 minutes		1202 AM
	0003 = 3 minutes		1203 AM
	0004 = 4 minutes		1204 AM
	0005 = 5 minutes		1205 AM
	0006 = 6 minutes		1206 AM
	0007 = 7 minutes		1207 AM
	0008 = 8 minutes		1208 AM
	0009 = 9 minutes		1209 AM
	0010 = 10 minutes		1210 AM
	0011 = 11 minutes		1211 AM
	0012 = 12 minutes		1212 AM
	0013 = 13 minutes		1213 AM
	0014 = 14 minutes		1214 AM
	0015 = 15 minutes		1215 AM
	0016 = 16 minutes		1216 AM
	0017 = 17 minutes		1217 AM
	0018 = 18 minutes		1218 AM
	0019 = 19 minutes		1219 AM
	0020 = 20 minutes		1220 AM
	0021 = 21 minutes		1221 AM
	0022 = 22 minutes		1222 AM
	0023 = 23 minutes		1223 AM
	0024 = 24 minutes		1224 AM
	0025 = 25 minutes		1225 AM
	0026 = 26 minutes		1226 AM
	0027 = 27 minutes		1227 AM
	0028 = 28 minutes		1228 AM
	0029 = 29 minutes		1229 AM
	0030 = 30 minutes		1230 AM
	0031 = 31 minutes		1231 AM
	0032 = 32 minutes		1232 AM
	0033 = 33 minutes		1233 AM
	0034 = 34 minutes		1234 AM
	0035 = 35 minutes		1235 AM
	0036 = 36 minutes		1236 AM
	0037 = 37 minutes		1237 AM
	0038 = 38 minutes		1238 AM
	0039 = 39 minutes		1239 AM
	0040 = 40 minutes		1240 AM
	0041 = 41 minutes		1240 AM
	0042 = 42 minutes		1240 AM
	0043 = 43 minutes		1240 AM
	0044 = 44 minutes		1240 AM
	0045 = 45 minutes		1240 AM
	0046 = 46 minutes		1240 AM
	0047 = 47 minutes		1240 AM
	0048 = 48 minutes		1240 AM
	0049 = 49 minutes		1240 AM
	0050 = 50 minutes		1250 AM
	0051 = 51 minutes		1251 AM
	0052 = 52 minutes		1252 AM
	0053 = 53 minutes		1253 AM
	0054 = 54 minutes		1254 AM
	0055 = 55 minutes		1255 AM
	0056 = 56 minutes		1256 AM
	0057 = 57 minutes		1257 AM
	0058 = 58 minutes		1258 AM
	0059 = 59 minutes		1259 AM
	0100 = 60 minutes		0100 AM
	0200 = 120 minutes		0200 AM
	0300 = 180 minutes		0300 AM
	0400 = 240 minutes		0400 AM
	0500 = 300 minutes		0500 AM
	0600 = 360 minutes		0600 AM
	0615 = 375 minutes		0615 AM
	0630 = 390 minutes		0630 AM
	0700 = 420 minutes		0700 AM
	0800 = 480 minutes		0800 AM
	0900 = 540 minutes		0900 AM
	1000 = 600 minutes		1000 AM
	1100 = 660 minutes		1100 AM
	1200 = 720 minutes		1200 PM
	1300 = 780 minutes		1 PM
	1400 = 840 minutes		2 PM
	1500 = 900 minutes		3 PM
	1600 = 960 minutes		4 PM
	1700 = 1020 minutes		5 PM
	1800 = 1080 minutes		6 PM
	1900 = 1140 minutes		7 PM
	2000 = 1200 minutes		8 PM
	2100 = 1260 minutes		9 PM
	2200 = 1320 minutes		10 PM
	2300 = 1380 minutes		11 PM
	2400 = 1440 minutes		12 PM
*/