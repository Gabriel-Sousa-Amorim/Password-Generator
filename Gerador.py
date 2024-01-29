import random 
chars = {
    "letters": "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzÇç",
    "numbers": "0123456789",
    "symbols": "!@#$%&*()-_+=^{}[];:?",
};
seed = 0

def Gerador(length):
    password = ""
    for i in range(length):
        seed = random.randint(1,3)
        match seed:
            case 1:
                seed = random.randint(0,chars["letters"].__len__() - 1)
                password += chars["letters"][seed]
            case 2:
                seed = random.randint(0,chars["numbers"].__len__() - 1)
                password += chars["numbers"][seed]
            case 3:
                seed = random.randint(0,chars["symbols"].__len__() - 1)
                password += chars["symbols"][seed]
    print("Your password is", password)
    password = ""

Gerador(15)
