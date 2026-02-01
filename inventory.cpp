class Inventory {
    vector<Product*> products;

public:
    void addProduct(Product* p);
    Product* search(string name);
};
