class bike:
    _bikeprice = 0

    def __init__(self, price):
        self._bikeprice = price

    def display(self):
        print(self._bikeprice)


sujuki = bike(2000)
sujuki.display()
