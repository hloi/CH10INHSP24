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

    ProduceItem* p1 = new ProduceItem("Banana", 5, "May 1, 2024", 1.5);
    Vegetable* p2 = new Vegetable("Carrot", 3, "May 1, 2024", 1.5, true);
    Vegetable* p3 = new Vegetable("Carrot", 3, "May 1, 2024", 1.5, true);
    Vegetable* p4 = new Vegetable("Banana", 5, "May 1, 2024", 2.0, true);
    Vegetable* p5 = new Vegetable("Carrot", 3, "May 1, 2024", 1.5, true);

    cout << *p1 << *p2 << *p3 << *p4 << *p5 << endl;


    listItems2.push_back(p1);
    listItems2.push_back(p2);
    listItems2.push_back(p3);

    listItems2.push_back(p4);
    listItems2.push_back(p5);

    if (p1->operator==(*p2))
        cout << "p1 and p2 are equal" << endl;
    else
        cout << "p1 and p2 are not equal" << endl;


//    if (*p1 == *p4)
//        cout << "p1 and p4 are equal" << endl;
//    else
//        cout << "p1 and p4 are not equal" << endl;
//
//    if (*p1 == *p2)
//        cout << "p1 and p2 are equal" << endl;
//    else
//        cout << "p1 and p2 are not equal" << endl;
//
//    if (*p2 == *p3)
//        cout << "p2 and p3 are equal" << endl;
//    else
//        cout << "p2 and p3 are not equal" << endl;

    if (*p2 == *p5)
        cout << "p2 and p5 are equal" << endl;
    else
        cout << "p2 and p5 are not equal" << endl;
    return 0;
}