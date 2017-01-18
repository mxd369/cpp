// Fig 22.6: fig22_06.cpp
// Printing an unsigned integer in buts.
#include <iostream>
#include <iomanip>
using namespace std;

void displayBits(unsigned); // prototype

int main() {
	unsigned inputValue{0}; // integral value to print in binary

	cout << "Enter an unsigned integer: ";
	cin >> inputValue;
	displayBits(inputValue);
}

// display bits of an unsigned integer value
void displayBits(unsigned value) {
	const unsigned SHIFT{8 * sizeof(unsigned) - 1};
	const unsigned MASK{static_cast<const unsigned>(1 << SHIFT)};

	cout << setw(10) << value << " = ";
	// display bits
	for (unsigned i{1}; i <= SHIFT + 1; ++i) {
		cout << (value & MASK ? '1' : '0');
		value <<= 1; // shoft value left by 1

		if (i % 8 == 0) { // output a space after 8 bits
			cout << ' ';
		}
	}

	cout << endl;
}
