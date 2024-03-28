#include <iostream>
#include <string>
#include <vector>

#include "GenericItem.h"
#include "ProduceItem.h"
#include "Vegetable.h"
using namespace std;

int main() {

    vector<GenericItem> listItems;

    // GenericItem miscItem;
    ProduceItem perishItem("Apple", 40, "Dec 5, 2019", 5.5);

//    miscItem.SetName("Crunchy Cereal");
//    miscItem.SetQuantity(9);
    // miscItem.PrintItem();

//    perishItem.SetName("Apples");
//    perishItem.SetQuantity(40);
//    perishItem.SetExpiration("Dec 5, 2019");
    // perishItem.PrintItem();

//    listItems.push_back(miscItem);
//    listItems.push_back(perishItem);
//    listItems.at(0).PrintItem();
//    listItems.at(1).PrintItem();


    vector<GenericItem*> listItems2;
//    listItems2.push_back(&miscItem);
    listItems2.push_back(&perishItem);
//    listItems2.at(0)->PrintItem();
    listItems2.at(0)->PrintItem();

    Vegetable v1("tomato", 2, "May 1, 2024", 2, false);
//    v1.SetName("tomato");
//    v1.SetQuantity(2);
//    v1.SetExpiration("May 1, 2024");
//    v1.setOrganic(true);
    listItems2.push_back(&v1);
    listItems2.at(1)->PrintItem();


    return 0;
}