//
// Created by hloi on 12/4/2023.
//

#include "Shopping.h"


vector<vector<Item>> Shopping::ShoppingBagCombinations(vector<Item> currBag,          // Bag contents
                             vector<Item> remainingItems) { // Available items
    int bagValue;        // Cost of items in shopping bag
    Item tmpGroceryItem; // Grocery item to add to bag
    unsigned int i;      // Loop index
    vector<vector<Item>> bags;
    if (currBag.size() == max_item_in_bag) { // Base case: Shopping bag full
        bagValue = getBagValue(currBag, i);
        cout << "= $" << bagValue << endl;
        bags.push_back(currBag);
    }
    else {                                              // Recursive case: move one
        getAllBags(currBag, remainingItems, bags, i);
    }

    return bags;
}

void Shopping::getAllBags(vector<Item> &currBag, vector<Item> &remainingItems, vector<vector<Item>>& allBags, unsigned int i) {
    Item tmpGroceryItem;
    if (i < remainingItems.size()) {     // item to bag
        // Move item into bag
        tmpGroceryItem = remainingItems.at(i);
        remainingItems.erase(remainingItems.begin() + i);
        currBag.push_back(tmpGroceryItem);

        vector<vector<Item>> tmpAllBags = ShoppingBagCombinations(currBag, remainingItems);
        allBags.insert(allBags.begin(), tmpAllBags.begin(), tmpAllBags.end());
        // Take item out of bag
        remainingItems.insert(remainingItems.begin() + i,tmpGroceryItem);
        currBag.pop_back();

        getAllBags(currBag, remainingItems, allBags, i+1);
    }
}

int Shopping::getBagValue(vector<Item> &currBag, unsigned int i) const {
    int bagValue = 0;
    if (i < currBag.size()) {

        cout << currBag.at(i).getItemName() << "  ";
        bagValue = currBag.at(i).getPriceDollars() + getBagValue(currBag, i+1);
    }
    return bagValue;
}

string Shopping::to_string(vector<vector<Item>> &bags, int i) {

    cout << "Number of items: " << bags.size() << endl;
    for (size_t i=0; i<bags.size(); i++) {
        int total = 0;
        for (size_t j=0; j<bags.at(i).size(); j++) {
            cout << bags.at(i).at(j) << endl;
            total += bags.at(i).at(j).getPriceDollars();
        }
        cout << "= $" << total << endl;
    }

    return "";
}
