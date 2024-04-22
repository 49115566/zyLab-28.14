#include "ShoppingCart.h"
#include <iostream>
using namespace std;

ShoppingCart::ShoppingCart() : customerName("none"), currentData("January 1, 2016") {}

ShoppingCart::ShoppingCart(string name, string data) : customerName(name), currentDate(date) {}

string ShoppingCart::GetCustomerName() const{
  return customerName;
}
