//
// Created by hloi on 12/4/2023.
//

#ifndef CH11RECMAKEUP_ITEM_H
#define CH11RECMAKEUP_ITEM_H

#include <string>
#include <ostream>

class Item {
public:
    Item() {}
    Item(const std::string &itemName, int priceDollars);

    const std::string &getItemName() const;

    void setItemName(const std::string &itemName);

    int getPriceDollars() const;

    void setPriceDollars(int priceDollars);

    friend std::ostream &operator<<(std::ostream &os, const Item &item);


private:
    // Name of item
    int priceDollars;

private:
    // Price of item
    std::string itemName;
};


#endif //CH11RECMAKEUP_ITEM_H
