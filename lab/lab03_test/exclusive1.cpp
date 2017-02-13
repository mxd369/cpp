#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
string number;
int result = 0;
  

cout << "Enter integers: ";
while(cin >> number)
{
if(number == "\n")
break;
result = stoi(number)^result;

cout << "Exclusive: " << result << endl;   
}

cout << "Exclusive: " << result << endl;

return 0;
}