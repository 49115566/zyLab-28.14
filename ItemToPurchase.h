#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;


class ItemToPurchase {
public:
	ItemToPurchase();
	void SetName(string n);
	void SetPrice(double p);
	void SetQuantity(int q);
	string GetName();
	double GetPrice();
	int GetQuantity();
private:
	string name;
	double price;
	int quantity;
};


/* code to be added here */

#endif
