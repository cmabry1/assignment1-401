#ifndef INDOORPRODUCT_H
#define INDOORPRODUCT_H

#include "Product.h"

class IndoorProduct : public Product {
public:
    IndoorProduct(int i, string n, double p, int s)
        : Product(i, n, p, s) {}
};

#endif
