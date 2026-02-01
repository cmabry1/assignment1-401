from abc import ABC, abstractmethod

class Product(ABC):
    def __init__(self, pid, name, price, stock):
        self._id = pid
        self._name = name
        self._price = price
        self._stock = stock

    def update_stock(self, qty):
        self._stock += qty

    def is_available(self, qty):
        return self._stock >= qty

    def reduce_stock(self, qty):
        self._stock -= qty

    def get_price(self):
        return self._price

    def get_name(self):
        return self._name

    @abstractmethod
    def get_details(self):
        pass
class IndoorProduct(Product):
    pass
class OutdoorProduct(Product):
    pass

class Volleyball(IndoorProduct):
    def __init__(self, pid, name, price, stock, material, size):
        super().__init__(pid, name, price, stock)
        self.material = material
        self.size = size

    def get_details(self):
        return f"{self._name} | Material: {self.material} | Size: {self.size} | Price: ${self._price}"


class Tent(OutdoorProduct):
    def __init__(self, pid, name, price, stock, size, weather):
        super().__init__(pid, name, price, stock)
        self.size = size
        self.weather = weather

    def get_details(self):
        return f"{self._name} | Size: {self.size} | Weather: {self.weather} | Price: ${self._price}"


class SoccerBall(OutdoorProduct):
    def __init__(self, pid, name, price, stock, material):
        super().__init__(pid, name, price, stock)
        self.material = material

    def get_details(self):
        return f"{self._name} | Material: {self.material} | Price: ${self._price}"

class Inventory:
    def __init__(self):
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def display_products(self):
        for p in self.products:
            print(p.get_details())

    def search(self, name):
        for p in self.products:
            if p.get_name() == name:
                return p
        return None

class Cart:
    def __init__(self):
        self.items = []

    def add_to_cart(self, product, qty):
        if product.is_available(qty):
            product.reduce_stock(qty)
            self.items.append(product)
            print(f"Added to cart: {product.get_name()}")
        else:
            print("Not enough stock!")

    def calculate_total(self, players=0):
        total = sum(p.get_price() for p in self.items)

        if players >= 5:
            print("Team discount applied!")
            total *= 0.9

        return total
        
def main():
    store = Inventory
    
    v1 = Volleyball(1, "Pro Volleyball", 25.0, 10, "Leather", "Official")
    t1 = Tent(2, "Camping Tent", 120.0, 5, "4-Person", "Rain Resistant")
    s1 = SoccerBall(3, "Soccer Ball", 30.0, 20, "Synthetic")

    store.add_product(v1)
    store.add_product(t1)
    store.add_product(s1)

    print("\n--- Available Products ---")
    store.display_products()

    cart = Cart()

    print("\n--- Shopping ---")
    found = store.search("Soccer Ball")

    if found:
        cart.add_to_cart(found, 2)

    print("\nTotal: $", cart.calculate_total(players=6))

if __name__ == "__main__":
    main()
