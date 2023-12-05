//
// Created by hloi on 12/4/2023.
//

#ifndef CH11RECMAKEUP_SHOPPING_H
#define CH11RECMAKEUP_SHOPPING_H
#include <vector>
#include <iostream>
#include <string>
#include "Item.h"

using std::vector;
using std::cout;
using std::endl;
using std::string;

class Shopping {
public:
    /* Output every combination of items that fit
   in a shopping bag. Each recursive call moves
   one item into the shopping bag.
*/
public:
    Shopping() {}

    Shopping(int maxItemInBag) : max_item_in_bag(maxItemInBag) {}

    vector<vector<Item>> ShoppingBagCombinations(vector<Item> currBag,          // Bag contents
                                 vector<Item> remainingItems);

    string to_string(vector<vector<Item>> &bags, int i=0);

private:
    int max_item_in_bag;
    int getBagValue(vector<Item> &currBag, unsigned int i) const;

    void getAllBags(vector<Item> &currBag, vector<Item> &remainingItems, vector<vector<Item>>& allBags, unsigned int i);
};


#endif //CH11RECMAKEUP_SHOPPING_H
