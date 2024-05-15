class adder:
    def add(self, a, b):
        return a + b

    def add(self, a, b, c):
        return a + b + c


plus = adder()
result = plus.add(3, 3, 1)
print(result)
