#include "Inventory.h"
#include "Cart.h"

int main() {
    Inventory store;

    // Create products
    Product* v1 = new Volleyball(1, "Pro Volleyball", 25.0, 10, "Leather", "Official");
    Product* t1 = new Tent(2, "Camping Tent", 120.0, 5, "4-Person", "Rain Resistant");
    Product* s1 = new SoccerBall(3, "Soccer Ball", 30.0, 20, "Synthetic");

    // Add to inventory
    store.addProduct(v1);
    store.addProduct(t1);
    store.addProduct(s1);

    cout << "\n--- Available Products ---\n";
    store.displayProducts();

    Cart cart;

    cout << "\n--- Shopping ---\n";
    Product* found = store.search("Soccer Ball");
    if (found)
        cart.addToCart(found, 2);

    cout << "\nTotal: $" << cart.calculateTotal(6) << endl;

    return 0;
}
