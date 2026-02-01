#ifndef OUTDOORPRODUCT_H
#define OUTDOORPRODUCT_H

#include "Product.h"

class OutdoorProduct : public Product {
public:
    OutdoorProduct(int i, string n, double p, int s)
        : Product(i, n, p, s) {}
};

#endif
