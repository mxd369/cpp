/* https://www.youtube.com/watch?v=hk5NYscSPHI */
#include <iostream>
using namespace std;
int main() {
	// C++ Input/Output Library -- Stream
	cout << "Hello" << endl;
	// cout: a global object of ostream (which exists inside std namespace)
	// ostream: typedef basic_ostream<char> ostream)
	// <<: ostream& ostream::operator<< (string v);
	// endl: '\n' + flush

	// What is stream? Serial IO Interface to external devices (file, stdin/stdout, network, etc)
	// there is a difference between a serial interface an a random access interface
	string s("Hello");
	s[3] = 't'; 	// Random Access
	// cout[3] = 't';	// error

	{
		// file stream
		ofstream of("MyLog.txt"); // Creates a new file for write, if the file didn't exist
		of << "Experience is the mother of wisdom" << endl;
		of << 234 << endl;
		of << 2.3 << endl;

		of << bitset<8>(14) << endl; // 00001110
		of << complex<int>(2,3) << endl; // (2,3)
	} // RAII

	// IO operation:
	// formatting the data <-----> communicating the data with external devices

	// Software Engineering Principle: Low Coupling (Promotes: Reusability)
}