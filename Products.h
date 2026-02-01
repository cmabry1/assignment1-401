#ifndef PRODUCTS_H
#define PRODUCTS_H

#include "IndoorProduct.h"
#include "OutdoorProduct.h"

// Volleyball
class Volleyball : public IndoorProduct {
    string material, size;
public:
    Volleyball(int i, string n, double p, int s,
               string m, string sz)
        : IndoorProduct(i, n, p, s), material(m), size(sz) {}

    void getDetails() override {
        cout << name << " | Material: " << material
             << " | Size: " << size
             << " | Price: $" << price << endl;
    }
};

// Tent
class Tent : public OutdoorProduct {
    string size, weather;
public:
    Tent(int i, string n, double p, int s,
         string sz, string w)
        : OutdoorProduct(i, n, p, s), size(sz), weather(w) {}

    void getDetails() override {
        cout << name << " | Size: " << size
             << " | Weather: " << weather
             << " | Price: $" << price << endl;
    }
};

// Soccer Ball
class SoccerBall : public OutdoorProduct {
    string material;
public:
    SoccerBall(int i, string n, double p, int s,
               string m)
        : OutdoorProduct(i, n, p, s), material(m) {}

    void getDetails() override {
        cout << name << " | Material: " << material
             << " | Price: $" << price << endl;
    }
};

#endif
