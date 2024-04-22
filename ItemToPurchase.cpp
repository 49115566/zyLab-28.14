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
void ItemToPurchase::SetDescription(string n) {
	itemDescription = d;
}
void ItemToPurchase::SetPrice(double p) {
	price = p;
}
void ItemToPurchase::SetQuantity(int q) {
	quantity = q;
}
string ItemToPurchase::GetName() {
	return name;
}
string ItemToPurchase::GetDescription() {
	return itemDescription;
}
double ItemToPurchase::GetPrice() {
	return price;
}
int ItemToPurchase::GetQuantity() {
	return quantity;
}

void ItemToPurchase::PrintItemCost() {
	cout << name << ' ' << quantity << " @ $" << price << " = $" << quantity*price << endl;
}
void ItemToPurchase::PrintItemDescription() {
	cout << name << ": " << itemDescription << endl;
}
