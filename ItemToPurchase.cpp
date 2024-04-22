#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
	name = "none";
	price = 0;
	quantity = 0;
}

void ItemToPurchase::SetName(string n) {
	name = n;
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

double ItemToPurchase::GetPrice() {
	return price;
}

int ItemToPurchase::GetQuantity() {
	return quantity;
}
