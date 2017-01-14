// bitwise_operators_applications
#include <iostream>
using namespace std;
int main(){
	// set bit
	char flags = 0x05;            // 0 0 0 0   0 1 0 1
	MASK3 = 0x08;                 // 0 0 0 0   1 0 0 0
	flags = flags | MASK3;        // 0 0 0 0   1 1 0 1


	// clear bit
	char flags = 0x05;            // 0 0 0 0   0 1 0 1
	~MAKS2;                       // 1 1 1 1   1 0 1 1
	flags = flags& ~MASKS2;       // 0 0 0 0   0 0 0 1


	// toggle bit
	char flags = 0x05;            // 0 0 0 0   0 1 0 1
	MASK0 = 0x01;                 // 0 0 0 0   0 0 0 1
	flags = flags | MASK3;        // 0 0 0 0   0 1 0 0


	// interchange
	xhar b = 0xF5;                // 1 1 1 1   0 1 0 1
	(b & MASK4)>>1;               // 0 0 0 0   1 0 0 0
	(b & MAKS3)<<1;               // 0 0 0 0   0 0 0 0

	char temp1 = (b & MASK4)>>1;
	char temp2 = (b & MASK3)<<1;  // 0 0 0 0   1 0 0 0
	char C = temp1 | temp2;

	return 0;
}