print("\n")
text = "Svaret på alt er 42"



#textToInt = int(text)

print(f"Text uten endringer:\n {text}\n\n")

words = text.split(" ")
print(f"Text etter splitt på ord:\n{words}\n\n")

# For each loop
# Syntax:
#   for element_variabel in liste_variabel:
#       kode som kjøres i loopen
'''
for word in words:
    try:
        print(f"[Prøver å konvertere '{word}' til int]")
        convertToInt = int(word)
        print(f"[Konvertering velykket]")
    except:
        print(f"[Kunde ikke konvertere '{word}' til int]")
'''

# Loop ved å bruke enumerate
# Syntax:
# for teller_variabel, element_variabel in enumerate(liste_variabel):
#    Kode som ska kjøres i loopen
#
print("\n")
for i, word in enumerate(words):
    try:
        print(f"[{i}][Prøver å konvertere '{word}' til int]")
        convertToInt = int(word)
        print(f"[{i}][Konvertering velykket]\n")
    except:
        print(f"[{i}][Kunde ikke konvertere '{word}' til int]\n")
        