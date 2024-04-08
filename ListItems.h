//
// Created by hloi on 4/2/2024.
//

#ifndef CH10INHSP24_LISTITEMS_H
#define CH10INHSP24_LISTITEMS_H


#include <vector>
#include "GenericItem.h"




class ListItems {

public:
    ListItems();
    void addItem(GenericItem* item);
    void printList();
    void removeItem(int index);
    void clearList();
    virtual ~ListItems();

private:
    std::vector<GenericItem*> listItems;

};


#endif //CH10INHSP24_LISTITEMS_H
