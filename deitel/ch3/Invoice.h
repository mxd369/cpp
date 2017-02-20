/*
(Invoice Class) Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store.

An Invoice should include four data members:
	a part number (type string),
	a part description (type string),
	a quantity of the item being purchased (type int),
	a price per item (type int).

[Note: In subsequent chapters, we’ll use numbers that contain decimal points (e.g., 2.75)—called floating-point values—to represent dollar amounts.]

Your class should have a constructor that initializes the four data members.
Provide a set and a get function for each data member.

In addition, provide a member function named getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int value.

If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0.

Write a test program that demonstrates class Invoice’s capabilities.
*/
#include <string>

class Invoice {
public:
	// Your class should have a constructor that initializes the four data members.
	Invoice(std::string partNumber, std::string partDescription, int itemQuantity, int pricePerItemPurchased)
		: partNum{partNumber}, partDesc{partDescription}, itemQuant{itemQuantity}, pricePerItem{pricePerItemPurchased} {
		// empty body
	}
	// InvoiceAmount
	int getInvoiceAmount() {
		if (itemQuant < 0) {
			itemQuant = 0;
		}
		else if (pricePerItem < 0){
			pricePerItem = 0;
		}
		return itemQuant * pricePerItem;
	}

	//
	int getitemQuant() const{
		// If the quantity is not positive, it should be set to 0
		return itemQuant;
	}

	//
	int getpricePerItem() const{
		// If the price per item is not positive, it should be set to 0.
		return pricePerItem;
	}

	//
	void setpartNum(std::string partNumber) {
		partNum = partNumber;
	}

	// function that sets the name
	void setpartDesc(std::string partDescription){
		partDesc = partDescription;
	}


	// Provide a set and a get function for each data member.
	std::string getpartNum() const{
		return partNum;
	}


	// function that returns the name
	std::string getpartDesc() const {
		return partDesc;
	}


	/*
	void setitemQuant(int itemQuantity) {
		itemQuant = itemQuantity;
	}

	
	void setpricePerItem(int pricePerItemPurchased) {
		pricePerItem = pricePerItemPurchased;
	}
	*/

private:
	int pricePerItem, itemQuant;
	std::string partDesc, partNum;
}; // end Invoice Account