#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase(string n, string d, double p, int q) {
	name = n;
	itemDescription = d;
	price = p;
	quantity = q;
}

void ItemToPurchase::SetName(string n) {
	name = n;
}
void ItemToPurchase::SetDescription(string d) {
	itemDescription = d;
}
void ItemToPurchase::SetPrice(double p) {
	price = p;
}
void ItemToPurchase::SetQuantity(int q) {
	quantity = q;
}
string ItemToPurchase::GetName() const {
	return name;
}
string ItemToPurchase::GetDescription() const {
	return itemDescription;
}
double ItemToPurchase::GetPrice() const {
	return price;
}
int ItemToPurchase::GetQuantity() const {
	return quantity;
}

void ItemToPurchase::PrintItemCost() const {
	cout << name << ' ' << quantity << " @ $" << price << " = $" << quantity*price << endl;
}
void ItemToPurchase::PrintItemDescription() const {
	cout << name << ": " << itemDescription << endl;
}
