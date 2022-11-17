# Enkel demonstrasjon av hvordan man kan skrive til fil.
'''
with open("skriv_til_meg.txt", "w") as fil:
    fil.write("Jeg skriver til deg!\n")
    fil.write("Prøver en gang til.")
    fil.write("Jeg er på samme rad?")
    fil.write("\n\tJeg er en ny rad med en tab")
'''

# Legge til til slutten av en fil
with open("skriv_til_meg.txt", "a") as fil:
    fil.write("\nJeg er legget til på slutten")
