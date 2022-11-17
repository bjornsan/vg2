print("\n")

text = "Svaret på alt er 42"

#print(len(text))

# Klassisk for loop
# Syntax:
# for teller_variabel in range(lengde_på_liste):
#   Kode som kjører i loopen.
#
# Her må elementene i listen bli hentet på følgende måte:
#
#  liste_variabel[teller_variabel]
#
# Der teller_variabelen vil bestemme hvilket element i listen som blir hentet.
'''
for i in range(len(text)):
    print(text[i], end=" ")
'''

# While loop
# Her benytter vi en ekstra teller_variabel utenfor loopen for 
# å klare å loope gjenom listen.
'''
counter = 0
while(counter < len(text)):
    print(text[counter], end="")
    counter += 1
'''


