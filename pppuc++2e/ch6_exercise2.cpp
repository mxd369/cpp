/*

2)

If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as come after it,” fix the program in §4.6.3 so that it always prints out a median. Hint: A median need not be an element of the sequence.

*/

/*
4.6.3 A numeric example
Let’s look at a more realistic example. Often, we have a series of values that we want to read into our program so that we can do something with them. The “something” could be producing a graph of the values, calculating the mean and median, finding the largest element, sorting them, combining them with other data, searching for “interesting” values, comparing them to other data, etc. There is no limit to the range of computations we might perform on data, but first we need to get it into our
computer’s memory. Here is the basic technique for getting an unknown — possibly large — amount of data into a computer. As a concrete example, we chose to read in floating-point numbers representing temperatures:

	// read some temperatures into a vector
	int main()
	{
		vector<double> temps; // temperatures
		for (double temp; cin>>temp; ) // read into temp
	temps.push_back(temp); // put temp into vector
	// . . . do something . . .
}

So, what goes on here? First we declare a vector to hold the data:

	vector<double> temps; // temperatures

This is where the type of input we expect is mentioned. We read and store doubles.
Next comes the actual read loop:


	for (double temp; cin>>temp; ) // read into temp
	temps.push_back(temp); // put temp into vector

We define a variable temp of type double to read into. The cin>>temp reads a double, and that double is pushed into the
vector (placed at the back). We have seen those individual operations before. What’s new here is that we use the input
operation, cin>>temp, as the condition for a for-statement. Basically, cin>>temp is true if a value was read correctly and
false otherwise, so that for-statement will read all the doubles we give it and stop when we give it anything else. For
example, if you typed
1.2 3.4 5.6 7.8 9.0 |
then temps would get the five elements 1.2, 3.4, 5.6, 7.8, 9.0 (in that order, for example, temps[0]==1.2). We used the
character '|' to terminate the input — anything that isn’t a double can be used. In §10.6 we discuss how to terminate input and
how to deal with errors in input.
To limit the scope of our input variable, temp, to the loop, we used a for-statement, rather than a while-statement:
Click here to view code image
double temp;
while (cin>>temp) // read
temps.push_back(temp); // put into vector
// ... temp might be used here ...
As usual, a for-loop shows what is going on “up front” so that the code is easier to understand and accidental errors are
harder to make.
Once we get data into a vector we can easily manipulate it. As an example, let’s calculate the mean and median
temperatures:
Click here to view code image
// compute mean and median temperatures
int main()
{
vector<double> temps; // temperatures
for (double temp; cin>>temp; ) // read into temp
temps.push_back(temp); // put temp into vector
// compute mean temperature:
double sum = 0;
for (int x : temps) sum += x;
cout << "Average temperature: " << sum/temps.size() << '\n';
// compute median temperature:
sort(temps); // sort temperatures
cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}
We calculate the average (the mean) by simply adding all the elements into sum, and then dividing the sum by the number of
elements (that is, temps.size()):
Click here to view code image
// compute average temperature:
double sum = 0;
for (int x : temps) sum += x;
cout << "Average temperature: " << sum/temps.size() << '\n';
Note how the += operator comes in handy.
To calculate a median (a value chosen so that half of the values are lower and the other half are higher) we need to sort the
elements. For that, we use a variant of the standard library sort algorithm, sort():
Click here to view code image
// compute median temperature:
sort(temps); // sort temperatures
cout << "Median temperature: " << temps[temps.size()/2] << '\n';
We will explain the standard library algorithms much later (Chapter 20). Once the temperatures are sorted, it’s easy to find the
median: we just pick the middle element, the one with index temps.size()/2. If you feel like being picky (and if you do, you
are starting to think like a programmer), you could observe that the value we found may not be a median according to the
definition we offered above. Exercise 2 at the end of this chapter is designed to solve that little problem.
*/