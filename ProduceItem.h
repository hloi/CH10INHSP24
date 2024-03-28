//
// Created by hloi on 3/28/2024.
//

#ifndef CH10INHSP24_PRODUCEITEM_H
#define CH10INHSP24_PRODUCEITEM_H
#include "GenericItem.h"

// Derived class inherits from GenericItem
class ProduceItem : public GenericItem {
public:
    ProduceItem() {}

    ProduceItem(string name, int quantity, string expireDate, double price) {
        this->SetName(name);
        this->SetQuantity(quantity);
        this->SetPrice(price);
        this->expirationDate = expireDate;
    }
    void SetExpiration(string newDate) {
        expirationDate = newDate;
    }

    string GetExpiration() {
        return expirationDate;
    }

    void PrintItem() {
        GenericItem::PrintItem();
        std::cout << expirationDate << std::endl;
    }

    void SetPrice(double price) {
        this->price = price;
    }
    double GetPrice() {
        return price;
    }
private:
    string expirationDate;
};


#endif //CH10INHSP24_PRODUCEITEM_H
