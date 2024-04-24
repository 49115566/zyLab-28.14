#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
    cout << "Choose an option:" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    string temp;
    double prices;
    int temp2;
    switch (option) {
        case 'a': {
            cout << "ADD ITEM TO CART" << endl;
            ItemToPurchase newItem;
            cin.ignore(); // Clear input buffer
            cout << "Enter the item name:" << endl;
            getline(cin, temp);
            newItem.SetName(temp);
            cout << "Enter the item description:" << endl;
            getline(cin, temp);
            newItem.SetDescription(temp);
            cout << "Enter the item price:" << endl;
            cin >> prices;
            newItem.SetPrice(prices);
            cout << "Enter the item quantity:" << endl;
            cin >> temp2;
            newItem.SetQuantity(temp2);
            theCart.AddItem(newItem);
            break;
        }
        case 'd': {
            cout << "REMOVE ITEM FROM CART" << endl;
            string itemName;
            cin.ignore(); // Clear input buffer
            cout << "Enter name of item to remove:" << endl;
            getline(cin, itemName);
            theCart.RemoveItem(itemName);
            break;
        }
        case 'c': {
            cout << "CHANGE ITEM QUANTITY" << endl;
            string itemName;
            int newQuantity;
            cin.ignore(); // Clear input buffer
            cout << "Enter the item name:" << endl;
            getline(cin, itemName);
            cout << "Enter the new quantity:" << endl;
            cin >> newQuantity;
            ItemToPurchase items(itemName, "none", 0.0, newQuantity);
            theCart.ModifyItem(items);
            break;
        }
        case 'i':
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            theCart.PrintDescriptions();
            break;
        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl;
            cout << "Number of Items: " << theCart.GetNumItems() << endl << endl;
            theCart.PrintTotal();
            break;
        case 'q':
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid option. Please choose again." << endl;
    }
}

int main() {
   string customerName;
   string todayDate;

   cout << "Enter customer's name: " << endl;
   getline(cin, customerName);

   cout << "Enter today's date:" << endl;
   getline(cin, todayDate);

   cout << endl << "Customer name: " << customerName << endl;
   cout << "Today's date: " << todayDate << endl;

   ShoppingCart theCart;
   
   return 0;
}
