/*
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
*/
#include <iostream>
#include <sstream>
using namespace std;
int main(){
/*
    int counter;
    string stream1;
    string storage1;
    string x;
    stringstream stream1(inputfromuser);

    while(stream1 >> storage1)
    {

        stringstream stream2(inputfromuser);
        while(stream2 >> storage2)
        {
            if(storage1 == storage2){
                //have a counter here or something to ++
                counter++;
            }
    }

    if(counter == 1)
    {
        cout << storage1 << endl;
    }
    else {
        counter --;
    }
        
    return 0;
}
*/
    cout << "Enter integers: " << endl;
    string inputfromuser;
    getline(cin, inputfromuser);
    int count = 0;
    int storage1;
    int storage2;
    //stringstream
    stringstream stream1(storage1);
    while(stream1 >> storage1){
 
        stringstream stream2(inputfromuser);
 
        while(stream2 >> storage2){
            if(storage1 == storage2){
                //have a counter here or something to ++
                count++;
            }
        }

        if(/*check if the counter is 1*/count == 1){
            //this is the exclusive number
            cout << "Exclusive: " << endl;
        }
        else {
            //reset counter
            count = 0;
        }
    return 0;
    }
}