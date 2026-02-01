#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product {
protected:
    int id;
    string name;
    double price;
    int stock;

public:
    Product(int i, string n, double p, int s)
        : id(i), name(n), price(p), stock(s) {}

    virtual void getDetails() = 0;

    void updateStock(int qty) {
        stock += qty;
    }

    bool isAvailable(int qty) {
        return stock >= qty;
    }

    void reduceStock(int qty) {
        stock -= qty;
    }

    double getPrice() { return price; }
    string getName() { return name; }
};

#endif
