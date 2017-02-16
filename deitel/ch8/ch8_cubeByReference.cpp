#include <iostream>
using namespace std;

int cubeByReference(int* nPtr){
	*nPtr = *nPtr * *nPtr * *nPtr;
}

int main() {
	int number{5};
	
	cubeByReference(&number);
	
	return 0;
}