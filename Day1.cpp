//OOP C++ Inventory Management System Project
//Day 1:Base Classes - Product & Item
#include <iostream>
using namespace std;
//Base class (Encapsulation + Inheritance)
class Product {
    protected:
    string productName;
    string category;
    public:
    Product(string name="", string cat="")
    : productName(name), category(cat) {}
    void setProductName(string name) {
        productName = name;
    }
    void setCategory(string cat) {
        category = cat;
    }
    virtual void displayInfo() {
        cout<<"Product Name: " <<productName<<endl;
        cout<<"Category: "<<category<<endl;
    }
};
//Derived class
class Item : public Product {
private:
    int itemID;
public:
    Item(int id=0, string name="", string cat="")
    : Product(name, cat), itemID(id) {}
    void displayInfo() override {
        cout<<"Item ID: "<<itemID<<endl;
        Product::displayInfo();
    }
};
int main() {
    Item i1(101,"Laptop","Electronics");
    i1.displayInfo();
    return 0;
}
