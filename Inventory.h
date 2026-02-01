#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Products.h"

class Inventory {
    vector<Product*> products;

public:
    void addProduct(Product* p) {
        products.push_back(p);
    }

    void displayProducts() {
        for (auto p : products) {
            p->getDetails();
        }
    }

    Product* search(string name) {
        for (auto p : products) {
            if (p->getName() == name)
                return p;
        }
        return nullptr;
    }
};

#endif

