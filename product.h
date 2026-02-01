class Product {
protected:
    int id;
    string name;
    double price;
    int stock;

public:
    Product(int i, string n, double p, int s);
    virtual void getDetails() = 0;
    void updateStock(int qty);
};
