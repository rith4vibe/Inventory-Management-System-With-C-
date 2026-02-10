//Day 1 Start with simple display with Item 
//There are 2 classes Item and Product 
//
#include <iostream>
using namespace std;
class Item
{
protected:
    int id;
    string name;

public:
    Item(int i = 0, string n = "") : name(n), id(i) {}
    void setId(int i) { id = i; }
    void setName(string n) { name = n; }
    virtual void displayInfo()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};
class Product : public Item
{
    int quantity;
    double price;

public:
    Product(int id = 0, string n = "", double p = 0.0, int q = 0) : Item(id, n), price(p), quantity(q) {}
    void displayInfo() override
    {
        Item::displayInfo();
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};
int main()
{
    Product p1(1, "Laptop", 999.99, 10);
    p1.displayInfo();
    return 0;
}
