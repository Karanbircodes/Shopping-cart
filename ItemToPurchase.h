#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   public:
   
   ItemToPurchase();
   
   
   void SetName(const string& userName);
   
   void SetPrice(int userPrice);
   
   void SetQuantity(int userQuantity);
   
   string GetName() const;
   
   int GetPrice() const;
   
   int GetQuantity() const;
   
   int CalculateTotalPrice() const;
   
   private:
   
   string itemName;
   
   int itemPrice;
   
   int itemQuantity;
};
   
   

#endif
