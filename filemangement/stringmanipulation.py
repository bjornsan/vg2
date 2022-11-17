# En string er bare en streng av tegn.
# En string kan ses på som en liste.
# Vi kan finne lengden av en string på samme måte som med en liste.
en_tekst = "Hej jeg er en setning"
lengde_av_en_tekst = len(en_tekst)
print(f"Antall tegn i teksten: {lengde_av_en_tekst}")

# split() - er en funksjon som kan brukes på en string for å dele den opp.
#           Hvis vi ikke sier noe annet vil den dele på "space", men vi kan
#           og velge hva vi vil dele på.
#
#           Dette gjøres ved å skrive split("hva jeg vil dele på"),
#           f.eks. split("j")

# En string er immutable - dvs. at den ikke endres. Hvis vi vil manipulere
# en string må vi lagre resultatet i en ny string. Som vi ser av eksemplet
# her har ikke en_tekst endrets.
ord = en_tekst.split()
print(en_tekst.split())
print(en_tekst)
print(ord)

# En annen funksjon som man bruke på en string er replace().
# Den tar to agrumenter - replace("Det jeg vil endre, "Det jeg vil endre til")
nysettning = en_tekst.replace("jeg", "dette")
print(nysettning)
print(en_tekst)

# print() - har en valgfri parameter "end" som kan benyttes til å endre på hvilken 
#           måte den formaterer teksten.
for o in ord:
    print(o, end=" -X-::-X-")

#h = en_tekst[4]
#print(h)