#ifndef OUTPRODUCT_H
#define OUTPRODUCT_H

#include "Product.h"

class OutProduct : public Product {
public:
    OutProduct(int i, string n, double p, int s)
        : Product(i, n, p, s) {}
};

#endif
