// InvoiceTestSolution.cpp
#include <iostream>
#include "InvoiceSolution.h"

using namespace std;

int main() {
	//initializes four data members
	Invoice item1{"MF352HNA", "Designed By Apple in California assembled in China", 8, 70};

	cout << "Part Number: "<< item1.getpartnum() << endl;
	cout << "Part Description: " << item1.getpartdesc() << endl;
	cout << "Quantity: " << item1.getquant() << endl;
	cout << "Price per item: " << item1.getpriceperitem() << endl;
	cout << "Invoice Amount: " << item1.getInvoiceAmount() << endl;
}