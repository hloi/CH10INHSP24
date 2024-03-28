//
// Created by hloi on 3/28/2024.
//

#ifndef CH10INHSP24_VEGETABLE_H
#define CH10INHSP24_VEGETABLE_H
#include "ProduceItem.h"

class Vegetable : public ProduceItem {


private:
    bool organic;
public:
    Vegetable() {}

    Vegetable(string name, int quantity, string exp, double price, bool organic) :
        ProduceItem(name, quantity, exp, price) {
        this->organic = organic;

    }
    bool isOrganic() const {
        return organic;
    }

    void setOrganic(bool organic) {
        Vegetable::organic = organic;
    }

    void PrintItem() {
        ProduceItem::PrintItem();
        std::cout << isOrganic() << std::endl;
    }

    double GetPrice() {
        return price;
    }
};


#endif //CH10INHSP24_VEGETABLE_H
