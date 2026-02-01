#ifndef INPRODUCT_H
#define INPRODUCT_H

#include "Product.h"

class InProduct : public Product {
public:
    InProduct(int i, string n, double p, int s)
        : Product(i, n, p, s) {}
};

#endif
