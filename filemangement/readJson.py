import json

# JSON (JavaScript Object Notation) - et populært format at lagre data på.
# Brukes av mange API'er (Application Programming Interface) og av noen NOSQL databaser,
# f.eks. MongoDB.
#
# Her er en enkel demonstrasjon av hvordan man kan lese inn data fra en json fil.
dataSkriveTilFIl = None

with open("data.json", "r") as file:
    #data = file.read()
    # json.loads leser inn filen som et JSON object
    data = json.loads(file.read())
    #print(data)
    # data['data] gjør at vi lagrer dataen til listen "data" i dataSkriveTilFil.
    dataSkriveTilFIl = data['data']
    #print(dataSkriveTilFIl)
    # Looper gjenom objektene lagret i listen og printer ut temperatur og sted.
    for d in  dataSkriveTilFIl:
        print(d['temp'])
        print(d['sted'])

# Åpner en ny fil og lagrer datane på følgende format "temperatur - - - sted"
#
# f foran en string står for "format string", hvilket lar oss formatere en string 
# på en ryddig måte. Variabler kan da skrives direkte inn i stringen ved å bruke 
# {variabelnavn}
with open("tempData.txt", "w") as file:
    for measurement in dataSkriveTilFIl:
        file.write(f"{measurement['temp']} - - - {measurement['sted']}\n")
        