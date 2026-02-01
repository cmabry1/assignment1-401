from abc import ABC, abstractmethod

class Product(ABC):
    def __init__(self, pid, name, price, stock):
        self._id = pid
        self._name = name
        self._price = price
        self._stock = stock

    def update_stock(self, qty):
        self._stock += qty

    @abstractmethod
    def get_details(self):
        pass

class Tent(Product):
    def __init__(self, pid, name, price, stock, size, durability, weather):
        super().__init__(pid, name, price, stock)
        self.size = size
        self.durability = durability
        self.weather = weather

    def get_details(self):
        return f"{self._name} - Weather Rating: {self.weather}"

class Inventory:
    def __init__(self):
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def search(self, name):
        for p in self.products:
            if p._name == name:
                return p
