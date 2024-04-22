#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H
#include <string>
using namespace std;

class ItemToPurchase {
public:
	ItemToPurchase(string n = "none", string d = "none", double p = 0, int q = 0);

	void SetName(string n);
	void SetDescription(string d);
	void SetPrice(double p);
	void SetQuantity(int q);
	string GetName();
	string GetDescription();
	double GetPrice();
	int GetQuantity();

	void PrintItemCost();
	void PrintItemDescription();
private:
	string name;
	string itemDescription
	double price;
	int quantity;
};

#endif
