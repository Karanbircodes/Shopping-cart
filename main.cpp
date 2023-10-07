#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   ItemToPurchase item1;
   ItemToPurchase item2;
   
   string itemName1, itemName2;
   int itemPrice1, itemPrice2;
   int itemQuantity1, itemQuantity2;
   int totalPrice1, totalPrice2;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName1);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice1;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity1;
   
   cin.ignore();
   
   cout << endl;
   
   cout << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName2);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice2;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity2;
   
   cout << endl;
   
   item1.SetName(itemName1);
   item1.SetPrice(itemPrice1);
   item1.SetQuantity(itemQuantity1);
   totalPrice1 = item1.CalculateTotalPrice();
   
   item2.SetName(itemName2);
   item2.SetPrice(itemPrice2);
   item2.SetQuantity(itemQuantity2);
   totalPrice2 = item2.CalculateTotalPrice();
   
   cout << "TOTAL COST" << endl;
   cout << itemName1 << " " << itemQuantity1 << " @ $" << itemPrice1 << " = $" << totalPrice1 << endl;
   cout << itemName2 << " " << itemQuantity2 << " @ $" << itemPrice2 << " = $" << totalPrice2 << endl;
   
   cout << endl;
   
   cout << "Total: $" << totalPrice1 + totalPrice2 << endl;

   
   return 0;
}
