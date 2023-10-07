#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
   itemName = "None";
   itemPrice = 0;
   itemQuantity = 0;
}

void ItemToPurchase::SetName(const string& userName) {
   itemName = userName;
}

void ItemToPurchase::SetPrice(int userPrice) {
   itemPrice = userPrice;
}

void ItemToPurchase::SetQuantity(int userQuantity) {
   itemQuantity = userQuantity;
}

string ItemToPurchase::GetName() const {
   return itemName;
}

int ItemToPurchase::GetPrice() const {
   return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
   return itemQuantity;
}

int ItemToPurchase::CalculateTotalPrice() const {
    return itemQuantity * itemPrice;
}
