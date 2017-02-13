/*
exclusive.cpp:

Let the user input an odd number of positive integers,
space separated, on a single line (as seen below).
Assume that each integer except for one, the exclusive integer,
appears an even number of times in the input.
Your program should output the exclusive integer.
Remember, you do not need nor should you use an array to solve this problem.
You should also not use string manipulation beyond extraction from an 
std::stringstream, if needed. 

Enter integers: 2 1 55 3 2 1 4 4 2 2 55
Exclusive: 3

"Assume that each integer except for one, the exclusive integer, appears an even number of times in the input."

there will be an odd number of input values but there will only be one unique value in the list aka the exclusive value
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	// Raunak Dey said dont need getline just while and cin
	/*
	while(stream1 >> storage1){

	stringstream stream2(inputfromuser);
	while(stream2 >> storage2){
		if(storage1 == storage2)
		have a counter here or something to ++
	}

	if(check if the counter is 1)
		this is the exclusive number
	else
		reset counter
	}
	*/
	cout << "Enter integers: " << endl;

	string x;
	getline(cin, x);
	int a;
	int n;
	//int number;
	int count = 0;
	int exclusive= 0;
	stringstream y(x);

	while(y >> a){
		cout << "x: " << x << endl;
		cout << "count: " << count << endl;
		cout << "a is currently: " << a << endl;
		
		++count;
		n = count;
		while(n!=0)
		{
			//cin>>a;
			//for(int i = 0; )
			exclusive = exclusive ^ a;
			n--;// reset value
		}

	}
	//cout << "x is " << x << endl;
	//cout << "count: " << count << endl;
	cout << "Exclusive Number: " << exclusive;
	return 0;
}//end of main function

/*
	getline(cin, ourinput);
	// use the above to get the input
	stringstream hello(ourinput);// for the outer loop 
	stringstream hi(ourinput);//for the nested loop
	// take the input in string stream
		while(hello >> storage){
			// basically here you are putting one number at a time into storage variable.
			// If you print storage u will get a single value
			// do more stuff here 
	}
	return 0;
}

while(stream1 >> storage1){

    stringstream stream2(inputfromuser);
    while(stream2 >> storage2){
      if(storage1 == storage2)
        have a counter here or something to ++
    }

    if(check if the counter is 1)
      this is the exclusive number
    else
      reset counter
  }


int counter;
string stream1;
string storage1;

while(stream1 >> storage1){

    stringstream stream2(inputfromuser);
    while(stream2 >> storage2){
      if(storage1 == storage2)
        //have a counter here or something to ++
          counter++;
    }

    if(counter == 1)
      cout << storage1 << endl;
    else
      counter --;
  }

  return 0;
}
*/

/*
	cout << "Enter integers: " << endl;

	string x;
	getline(cin, x);
	int a;
	int count = 0;
	int exclusive_int;
	int previous = 0;
	int current = -1;
	stringstream y(x);

	while(y >> a){
		cout << "count: " << count << endl;
		//cout << "x: " << x << endl;
		//cout << "a: " << a << endl;
		cout << "a is currently: " << a << endl;
		previous = a;
		cout << "previous is: " << previous << endl;
		
		++count;

		while (y >> a) {	// read a stream of words
			if(previous == a)	// check if the word is the same as last
				cout << "repeated word: " << current << '\n';
		previous = current;
		}


		//++count;


		for ( ; count >= input;){
			if (a > count)
		}

		
		for(unsigned i = 0; i < x.length(); ++i){
			cout << x.at(i) << endl;
		}
		

		
		if(count == 1) {
			cout << "a currently is: " << a << endl; 
		}

		//cout << "x is " << x << endl;
	}
	cout << "x is " << x << endl;
	cout << "count: " << count << endl;
	// if (a == x) { cout << "a == x" << endl; }
	return 0;
}


$ ./exclusive
Enter integers: 
2 1 55 3 2 1 4 4 2 2 55
count: 0
a is currently: 2
previous is: 2
count: 1
a is currently: 1
previous is: 1
count: 2
a is currently: 55
previous is: 55
count: 3
a is currently: 3
previous is: 3
count: 4
a is currently: 2
previous is: 2
count: 5
a is currently: 1
previous is: 1
count: 6
a is currently: 4
previous is: 4
count: 7
a is currently: 4
previous is: 4
count: 8
a is currently: 2
previous is: 2
count: 9
a is currently: 2
previous is: 2
count: 10
a is currently: 55
previous is: 55
x is 2 1 55 3 2 1 4 4 2 2 55
count: 11

*/


/*
Raunak Dey
hi,

Yes you may do a second loop like you said. 
Or just have a global variable outside all the loops and
then just keep using '^' the XOR operator.
*/