
#include <iostream>
#include <sstream>
using namespace std;
int main() {
	std::stringstream ss;
	std::string input = "a b c 4 e";
	ss << input;
	int found;
	std::string temp;

	while(std::getline(ss, temp, ' ')) {
		if(std::stringstream(temp)>>found)
		{
			std::cout<<found<<std::endl;
		}
	}
	return 0;
}
