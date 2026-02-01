#ifndef PRODUCTS_H
#define PRODUCTS_H

#include "InProduct.h"
#include "OutProduct.h"

// Volleyball
class Volleyball : public InProduct {
    string material, size;
public:
    Volleyball(int i, string n, double p, int s,
               string m, string sz)
        : InProduct(i, n, p, s), material(m), size(sz) {}

    void getDetails() override {
        cout << name << " | Material: " << material
             << " | Size: " << size
             << " | Price: $" << price << endl;
    }
};

// Tent
class Tent : public OutProduct {
    string size, weather;
public:
    Tent(int i, string n, double p, int s,
         string sz, string w)
        : OutProduct(i, n, p, s), size(sz), weather(w) {}

    void getDetails() override {
        cout << name << " | Size: " << size
             << " | Weather: " << weather
             << " | Price: $" << price << endl;
    }
};

// Soccer Ball
class SoccerBall : public OutProduct {
    string material;
public:
    SoccerBall(int i, string n, double p, int s,
               string m)
        : OutProduct(i, n, p, s), material(m) {}

    void getDetails() override {
        cout << name << " | Material: " << material
             << " | Price: $" << price << endl;
    }
};

#endif
