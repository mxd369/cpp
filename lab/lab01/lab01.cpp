#include <iostream>
using namespace std;
// k: stands for the number that should evenly divided 32 bits, 1,2,4,8,16,32
// 32 stores 32 values
// 16 stores 16 values
// 08 stores 08 values
// 04 stores 04 values
// 02 stores 02 values
// 01 stores 01 value
// 0000 0000 0000 0011 = 3
// 0000 0000 0010 0010 = 34
// 0000 0000 0000 1011 = 11
// 0000 0000 0001 0100 = 20
// var = pass by reference value
// k   = partition
// i   = index of partition
// val = value passed into reference
unsigned int var = 0;
unsigned int k = 0;
unsigned int i = 0;
unsigned int val = 0;
/**
 * void setValue
 * This function takes in our storage variable by reference,
 * the number of values k, the index of a value to set (0 through k-1), and a value to set.
 * You may assume that all inputs are valid. For example, assuming your unsigned int storage
 * variable is x, in order to use the whole variable to store a value,
 * you should be able to type something like setValue(x, 1, 0, 1337).
 * If you want to to be able to store 32 values (one value for each bit) and only assign the second bit to 1,
 * then you should be able to type something like setValue(x, 32, 1, 1).
 */
void setValue(unsigned int & var, unsigned int k, unsigned int i, unsigned int val){
}
/**
 * getValue
 * This function takes in our storage variable by value, the number of values k,
 * and the index of a of a value to get (0 through k-1). You may assume that all inputs are valid.
 * For example, if x is the unsigned int variable corresponding
 * to the first example in the "Specific Examples" section,
 * then getValue(x, 4, 0) would return 20 and getValue(x, 4, 2) would return 34.
 */
unsigned int getValue(unsigned int var, unsigned int k, unsigned int i){
}
/**
 * int main()
 * This function, the entry-point to your program, should prompt the user for a value of k, then prompt the user for k values.
 * The setValue function should be used to set these values into a single unsigned int variable.
 * After that, the main function should extract each of the k values from the storage variable using the getValue function
 * and print them to the screen.
 */
int main(){
	// Prompt user for k
	cout << "'k' value can only be 1, 2, 4, 8, 16, or 32." << endl;
	cout << "An invalid entry will terminate the program." << endl;
	cout << "Enter your k value: " << endl;
	cin >> k;
	cout << "You entered " << k << " for 'k'" << endl; 
	if (k == 1 || k == 2 || k == 4 || k == 8 || k == 16 || k == 32){
		cout << "You entered a valid k value" << endl;
	}
	else {
		cout << "You gave an invalid value for k." << endl;
		return(0);
	}

	// Prompt user for values 
	cout << "Give your 'values' to be stored" << endl;
	// 'while loop' that takes in the values or a 'for loop'
	// the value of k will stand as the stopping value of the for loop
	for(unsigned int x = 0; x < k; x++) {
		cin >> val;
	}
	
	// test to see what the value of val is
	cout << "variable val = " << val << endl;
	
	return 0;
}
/**
 * setValue sets the values in the bit field.
 * getValue returns the values stored in the bit field.
 */
/**
 * What is your k? 4
 * 1
 * 2
 * 3
 * 4
 */
// returns what you put in but internally program computes, shifted, masked, stored values into the unsigned int
/**
 * 1: 1 
 * 2: 2
 * 3: 3 
 * 4: 4
 */