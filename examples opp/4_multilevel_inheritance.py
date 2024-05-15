class grandfather:
    def who(self):
        print("i am your grandfather")


class dad(grandfather):
    def dadname(self):
        print("I am your dad")


class child(dad):
    pass


p1 = child()
p1.who()
p1.dadname()
