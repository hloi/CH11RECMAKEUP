//
// Created by hloi on 12/4/2023.
//

#include "Item.h"

const std::string &Item::getItemName() const {
    return itemName;
}

void Item::setItemName(const std::string &itemName) {
    Item::itemName = itemName;
}

int Item::getPriceDollars() const {
    return priceDollars;
}

void Item::setPriceDollars(int priceDollars) {
    Item::priceDollars = priceDollars;
}

std::ostream &operator<<(std::ostream &os, const Item &item) {
    os << " itemName: " << item.itemName << " priceDollars: " << item.priceDollars;
    return os;
}

Item::Item(const std::string &itemName, int priceDollars) : priceDollars(priceDollars), itemName(itemName) {}
