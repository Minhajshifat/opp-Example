class name:
    myname = "shifat"


class age:
    myage = "21"


class person(name, age):
    pass


p1 = person()
print("my name is " + p1.myname, "my age is " + p1.myage)
