/*
Exercise 3: chapter 4 Exercise 3

Read a sequence of doubles into a vector.
Think of each value as the distance between two cities along a given route.
Compute and print the total distance (the sum of all distances).
Find and print the smallest and greatest distance between two neighboring cities.
Find and print the mean distance between two neighboring cities.
*/

/*
	Immediately, we are faced with the question "when do we stop reading in distance values?
	My choice here is "whenever we find a 0 or a negative distance"

	I decided to compute the sum of the distances, the smallest distance, and the largest distance
	as we read along. I could have waited until every value had been read and then go through the
	read values (now stored in the vector dist).
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	//read a sequence of doubles into a vector
	// vector that stores doubles named dist
    vector<double> dist;
	
	//compute and print the total distance (the sum of all distances)
	//find and print the smallest and greatest distance between two neighboring cities
	double sum = 0; // accumulate total distance in sum
	double min = 0; // smallest distance
	double max = 0; // largest distance
	
	cout << "Please enter a whitespace-separated sequence of doubles (representing distances) : ";
	double val = 0;
	while (cin>>val) {
		if (val<=0) {
			if (dist.size() == 0) cout<<("no distances");
			cout << "total distance "     << sum << '\n';
			cout << "smallest distance " << min << '\n';
			cout << "greatest distance "  << max << '\n';
			cout << "mean distance "      << sum/dist.size() << '\n';
			return 0; //exit
		}
		dist.push_back(val); // store the value
		
		// update the "running" values:
		sum += val;
		if (val<min) min = val;
		if (max<val) max = val;
	}
	if (dist.size() == 0) cout<<("no distances");
	cout << "total distance "     << sum << '\n';
	cout << "smallest distance " << min << '\n';
	cout << "greatest distance "  << max << '\n';
	cout << "mean distance "      << sum/dist.size() << '\n';
}

/*
	Note the test for "no distances entered". Forgetting the case of "no input" is a common error.

	Why are the min and max correctly computed? 

	Is the mean correctly computed?

	what reason might I have had for computing sum, max, and mean as we read along? Could the code
	have been cleaner if I had postponed computation until after the last read?

	Why did I repeat the output statements? Replicating code is tedious and error-prone. Can you see
	a way of removing that replication?
*/