#include <iostream>
using namespace std;

int cubeByValue(int n){
	return n * n * n;
}

int main() {
	int number{5};
	
	number = cubeByValue(number);
	
	return 0;
}