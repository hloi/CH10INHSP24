//
// Created by hloi on 3/28/2024.
//

#ifndef CH10INHSP24_GENERICITEM_H
#define CH10INHSP24_GENERICITEM_H

#include <string>
#include <iostream>

using std::string;


// Base class
class GenericItem {
public:
    GenericItem() {}

    GenericItem(string name, int quantity) {
        this->itemName = name;
        this->itemQuantity = quantity;
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

    virtual double GetPrice() = 0;  // pure virtual
    virtual void SetPrice(double p) = 0; // pure virtual

private:
    string itemName;
    int itemQuantity;

protected:
    double price;
};



#endif //CH10INHSP24_GENERICITEM_H
