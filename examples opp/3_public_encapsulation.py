class bike:
    bikeprice = 0

    def __init__(self, price):
        self.bikeprice = price

    def display(self):
        print("price is : " + (self.bikeprice))


sujuki = bike(2000)
sujuki.display()
