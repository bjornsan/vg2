# Options for å åpne en fil
# r     =   Read Only - Leser en fil, genererer en IOError hvis filen ikke finnes.
# r+    =   Read and write - Leser og skrive til feil, genererer en IOError hvis filen ikke finnes.
# w     =   Write Only - Skriver til fil, hvis filen finnes overskrives innholdet.
#                        Hvis filen ikke finnes lages en ny fil.
# w+    =   Write and read - Samme som w men kan og lese.
# a     =   Append - Legger til tekst på slutten av en fil.
# a+    =   Append and read - samme som a men kan og lese fra fil.
#
# De mest brukte er disse
# r, w, a

# Basic syntax for åpning av fil og lesing.
# open("filnavn", "option") - åpne en fil
# read() - leser inn alt inhold fra filen
# readline() - leser en rad av filen
# readlines() - leser inn alle rader fra filen og lagrer dem i en liste
# close() - må brukes for å sikre at filen blir lukket
'''
fil = open("en_fil.txt", "r")
#print(fil.read())
#print(fil.readline())
#print(fil.readline())
#print(fil.readline())
#print(fil.readline())
#print(fil.readline())

rader = fil.readlines()
#print(rader)

# Looper gjenom rad for å rad å printer til konsoll
for rad in rader:
    #print(rad)

    # Looper gjenom ord for ord å printer til konsoll
    # split() - deler opp setningen
    for ord in rad.split():
        print(ord)

fil.close()
'''

# seek() - navigerer i filen til ønsket "index".
# seek(0) - vil navigere til begynnelsen av filen.
'''
fil = open("en_fil.txt", "r")

rad1 = fil.readline()
rad2 = fil.readline()
rad3 = fil.readline()

fil.seek(10)
rad1_1 = fil.readline()

print(rad1)
print(rad2)
print(rad3)
print(rad1_1)

fil.close()
'''

# En bedre måte å åpne en fil
# with - sikrer at filen blir lukket slik at vi ikke trenger å tenke på det.
# try - except - Prøver å åpne en fil, hvis vi får noe errors vil de fanges opp og
#                printer det til konsollen.
#
#                I en riktig applikasjon hade det vært lurt å håndtere dette på en 
#                eller annen måte. 
try:
    with open("en_fil2.txt", "r") as file:
        lines = file.readlines()
        for line in lines:
            print(line)
except FileNotFoundError as e:
    print("Filen finnes ikke")
    #print(e)

