class animal:
    def live(self):
        print("i live in jungle")

    def sound(self):
        pass


class cat(animal):
    def sound(self):
        print("mew mew")


class monkey(animal):
    def sound(self):
        print("koyak koyak")


monkey1 = monkey()
monkey1.sound()
monkey1.live()
cat1 = cat()
cat1.sound()
