/*
Write a test program that demonstrates class Invoice’s capabilities.
*/
#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
	// initialize data members
	//initializes four data members
	Invoice item1{"MF352HNA", "Designed By Apple in California assembled in China", 8, 70};
	
	cout << "Part Number:      " << item1.getpartNum()       << "\n";
	cout << "Part Description: " << item1.getpartDesc()      << "\n";
	cout << "Quantity:         " << item1.getitemQuant()     << "\n";
	cout << "Price per Item:   " << item1.getpricePerItem()  << "\n";
	cout << "Invoice Amount:   " << item1.getInvoiceAmount() << "\n";

}