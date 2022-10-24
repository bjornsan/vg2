
try:
    x = 45 / 0
except ZeroDivisionError as e:
    print("Kan ikke dele på 0")

try:
    tall = input("skriv ett tall")
    print( type(tall) )
    
    if(not isinstance(tall, int)):
        raise ValueError
except ValueError as e:
    print("Inputen er ikke et tall av INT")
    try:
        tall = int( tall )
        print(type(tall))
        if(not isinstance(tall, int)):
            raise ValueError

        print("Det gikk at konvertere til INT")

    except ValueError as e:
        print("Inputen er ikke et tall av INT")