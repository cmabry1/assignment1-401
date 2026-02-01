#ifndef CART_H
#define CART_H

#include <vector>
#include "Product.h"

class Cart {
    vector<Product*> items;

public:
    void addToCart(Product* p, int qty) {
        if (p->isAvailable(qty)) {
            p->reduceStock(qty);
            items.push_back(p);
            cout << "Added to cart: " << p->getName() << endl;
        } else {
            cout << "Not enough stock!\n";
        }
    }

    double calculateTotal(int players = 0) {
        double total = 0;
        for (auto p : items) {
            total += p->getPrice();
        }

        if (players >= 5) {
            total *= 0.9;
            cout << "Team discount applied!\n";
        }

        return total;
    }
};

#endif
