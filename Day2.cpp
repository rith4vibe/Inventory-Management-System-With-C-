//OOP C++ Inventory Management System Project
//Day 2:InventoryItem Class
#include <iostream>
using namespace std;
class InventoryItem {
private:
    int itemID;
    string itemType;
    double price;
    bool inStock;
public:
    InventoryItem(int id = 0, string type ="General", double p = 10.0) {
        itemID = id;
        itemType = type;
        price = p;
        inStock = false;
    }
    //Add stock
    void addStock() {
        if (!inStock) {
            inStock = true;
            cout<<"Item added to stock successfully.\n";
        } else {
            cout<<"Item already in stock.\n";
        }
    }
    //Remove stock
    void removeStock() {
        inStock = false;
        cout <<"Item removed from stock.\n";
    }
    //Get status
    string getStatus() {
        return inStock ? "In Stock" : "Out of Stock";
    }
    //Get price
    double getPrice() {
        return price;
    }

    void displayItem() {
        cout<<"Item ID: "<<itemID<<" | Type: "<<itemType<<" | Price: $"<<price<<" | Status: "<<getStatus()<<endl;
    }
};
int main() {
    InventoryItem i1(501, "Electronics", 850);
    i1.displayItem();
    i1.addStock();
    i1.displayItem();
    return 0;
}
