#include "ShoppingCart.h"
#include <iostream>
using namespace std;

ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016") {}

ShoppingCart::ShoppingCart(string name, string date) : customerName(name), currentDate(date) {}

string ShoppingCart::GetCustomerName() const{
    return customerName;
}
string ShoppingCart::GetDate() const {
    return currentDate;
}
void ShoppingCart::AddItem(const ItemToPurchase&  item) {
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(const string& itemName) {
    bool found = false;
    for (size_t i = 0; i < cartItems.size(); ++i) {
        if (cartItems[i].GetName() == itemName) {
            cartItems.erase(cartItems.begin() + i);
            found = true;
            break;
            }
        }
    }
        int ShoppingCart::GetNumItemsInCart() const {
            int totalItems = 0;
            for (ItemToPurchase item: cartItems) {
                totalItems += item.GetQuantity();
            }
            return totalItems;
        }
        int ShoppingCart::GetCostOfCart() const {
            int totalCost = 0.0;
            for (ItemToPurchase item: cartItems) {
                totalCost += item.GetPrice() * item.GetQuantity();
            }
            return totalCost;
        }
        void ShoppingCart::PrintTotal() const {
            if (cartItems.empty()) {
                cout << customerName << "'s Shopping Cart -" << currentDate << endl;
                cout << "Number of Items: 0" << endl << endl;
                cout << "SHOPPING CART IS EMPTY" << endl;
            } else {
                cout << customerName << "'s Shopping Cart -" << currentDate << endl;
                cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;
                for(
                ItemToPurchase item : cartItems) {
                    item.PrintItemCost();
                }
                cout << endl << "TotalL $" << GetCostOfCart() << endl;
            }
        }
        void ShoppingCart::PrintDescriptions() const {
            cout << customerName << "'s Shopping Cart -" << currentDate << endl;
            cout << "Item Descriptions" << endl;
            for (ItemToPurchase item: cartItems) {
                item.PrintItemDescription();
            }
        }

