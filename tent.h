class Tent : public Product {
    string size;
    string durability;
    string weather;

public:
    Tent(int i, string n, double p, int s,
         string sz, string d, string w);

    void getDetails() override;
};
