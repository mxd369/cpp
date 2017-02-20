// InvoiceSolution.h
/*
Invoice class with data members:
	part number,
	part description,
	quantity,
	and price of item 

a constructor

a getInvoiceAmount function, that calculates invoice amount
*/
#include <string>
using namespace std;

class Invoice {
public:
	// Invoice constructor with four parameters
	Invoice (string partnumber, string partdescription, int quantity, int priceperitem)
		: partnum{partnumber}, partdesc{partdescription}, quant{quantity}, price{priceperitem} {
		//assign partnumber, partdescription, quantity, priceperitem
	}

	// function returns and calculates invoiceAmount
	int getInvoiceAmount() {
		// if quantity is not positive set to 0
		if(quant < 0) {
			quant = 0;
		}
		else if (price < 0) {
			price = 0;
		}
		//multiplies quantity by price per item and returns amount
		return quant * price;
	}

	// function that returns the quantity
	int getquant() const {
		return quant;
	}

	// function that returns priceperitem
	int getpriceperitem() const {
		return price;
	}

	// function that sets the partnumber
	void setpartnum(string partnumber) {
		partnum = partnumber;
	}

	// function that sets the partdescription
	void setpartdesc(string partdescription) {
		partdesc = partdescription;
	}

	// function that returns the partnumber
	string getpartnum() const {
		return partnum;
	}

	// function that returns the part description
	string getpartdesc() const {
		return partdesc;
	}

private:
	string partnum, partdesc;
	int quant, price;
}; // end class Invoice