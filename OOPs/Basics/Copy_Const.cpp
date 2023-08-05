#include <iostream>
using namespace std;

class Inventory {
    int itemCount;
    int itemCapacity;
    int* items;

    public:

    Inventory(int i_cnt, int i_cpct, int* i) {
        itemCount = i_cnt;
        itemCapacity = i_cpct;
        items = i;
    }

    Inventory(const Inventory& obj) { // Copy Constructor
        itemCount = obj.itemCount;
        itemCapacity = obj.itemCapacity;
        items = new int[itemCapacity];
        for(int i = 0; i < itemCount; i++) {
            items[i] = obj.items[i];
        }
    }

    //Destructor
    ~Inventory() {
        delete[] items;
        cout << "Destructor Called" << endl;
    }

    void display() {
        cout << "Item Count: " << itemCount << endl;
        cout << "Item Capacity: " << itemCapacity << endl;
        cout << "Items: ";
        for(int i = 0; i < itemCount; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }


};

int main() {
    // int items[5] = {1, 2, 3, 4, 5};
    // Inventory inv1(5, 10, items);
    // inv1.display();

    // Inventory inv2 = inv1; // Copy Constructor
    // inv2.display();


    int items[15];
    for(int i=0; i<15; i++) {
        items[i] = rand() % 100;
    }

    Inventory inv1(15, 100, items);
    inv1.display();

    Inventory inv2 = inv1; // Copy Constructor
    inv2.display();

    return 0;
}