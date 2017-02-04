/*
If we define the median of a sequence as "the number for which exactly half of the elements of the sequence come before it and exactly half come
after it," fix the program in §4.6.2 so that it always prints out a median.
Hint: A median need not be an element of the sequence.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	vector<double> temps;            // temperatures
	double temp;
	while (cin>>temp)                // read
		temps.push_back(temp);       // put into a vector
    
	// compute mean temperature:
	double sum = 0;
	for(int i = 0; i<temps.size(); ++i) sum += temps[i];
	cout<<"Average temperature: " <<sum/temps.size()<<endl;
	
	// computer median temperature
	sort(temps.begin(),temps.end()); // sort temps
	                                 // "from the beginning to the end"
    cout<<"Median temperature: "<<temps[temps.size()/2]<<endl;
}
/*
$ g++ ex2.cpp
$ ./a.out
12.1
2.1
6.7
8.7
19.8
3.2
5.4 
8.9
1.1
3.4
5.7 
|
Average temperature: 7.00909
Median temperature: 5.7
*/