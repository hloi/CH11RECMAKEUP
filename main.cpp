#include <iostream>

using namespace std;

#include <iostream>
#include <string>
#include <vector>


#include "Item.h"
#include "Shopping.h"

using namespace std;

int main() {
    vector<Item> possibleItems = {
            Item("Milk", 2),
            Item("Belt", 24),
            Item("Toys", 19),
            Item("Cups", 12),
            Item("Fruits", 10)

    }; // Possible shopping items
    vector<Item> shoppingBag;   // Current shopping bag
    Item tmpGroceryItem;           // Temp item

    int n, nbag;

    cin >> n >> nbag;

    possibleItems.erase(possibleItems.begin()+n, possibleItems.end());

    Shopping s(nbag);

    vector<vector<Item>> allbags = s.ShoppingBagCombinations(shoppingBag, possibleItems);

    cout << s.to_string(allbags);



    // Try different combinations of three items
    // ShoppingBagCombinations(shoppingBag, possibleItems);

    return 0;
}


int forRec(int count) {
    int total = 0;
    if (count == 10) {
        return 0;
    }
    else {
        cout << count << endl;
        total = count + forRec(count+1);
    }

    if (count < 10) {
        cout << count << endl;
        total = count + forRec(count+1);
    }
    return total;
}

void forLoop() {

    int count = 0;
    int total = 0;
    while (count < 10) {
        cout << count << endl;
        total = total + 1;
        count = count + 1;
    }

}

//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    // forLoop();
//    int total = forRec(0);
//    cout << total << endl;
//    return 0;
//}
