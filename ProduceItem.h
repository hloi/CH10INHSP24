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

    ProduceItem(string name, int quantity, string expireDate, double price) : GenericItem(name, quantity, price) {
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


    virtual bool operator==(const ProduceItem& rhs) {
        bool result = (GenericItem) *this == (GenericItem) rhs;
        bool result2 = expirationDate == rhs.expirationDate;
        return result && result2;
    }

    friend ostream& operator<<(ostream& os, const ProduceItem& item) {
        os << (GenericItem) item << item.expirationDate << std::endl;
        return os;
    }
private:
    string expirationDate;
};


#endif //CH10INHSP24_PRODUCEITEM_H
