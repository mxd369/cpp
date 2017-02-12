#include <iostream>
#include <sstream>
using namespace std;
int main(){
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
*/

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
