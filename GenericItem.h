//
// Created by hloi on 3/28/2024.
//

#ifndef CH10INHSP24_GENERICITEM_H
#define CH10INHSP24_GENERICITEM_H

#include <string>
#include <iostream>
#include <sstream>

using std::string;
using std::ostream;

// Base class
class GenericItem {
public:
    GenericItem() {}

    GenericItem(string name, int quantity) {
        this->itemName = name;
        this->itemQuantity = quantity;
    }

    GenericItem(string name, int quantity, double price) {
        this->itemName = name;
        this->itemQuantity = quantity;
        this->price = price;
    }

    void SetName(string newName) {
        itemName = newName;
    }

    void SetQuantity(int newQty) {
        itemQuantity = newQty;
    }

    virtual void PrintItem() {
        std::cout << itemName << " " << itemQuantity << " " << price << std::endl;
    }

    virtual double GetPrice() { return price; }
    virtual void SetPrice(double p) { this->price = p; } // pure virtual
    virtual bool operator==(const GenericItem& rhs) {
        return itemName == rhs.itemName && itemQuantity == rhs.itemQuantity && price == rhs.price;
    }

    friend ostream& operator<<(ostream& os, const GenericItem& item) {
        os << item.itemName << " " << item.itemQuantity << " " << item.price << std::endl;
        return os;
    }
private:
    string itemName;
    int itemQuantity;
    double price;
};



#endif //CH10INHSP24_GENERICITEM_H
