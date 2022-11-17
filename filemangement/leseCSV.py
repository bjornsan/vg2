with open("highscore.csv", "r") as file:
    for line in file.readlines():
        entry = line.split(";")
        #print(entry)
        navn = entry[0]
        highscore = entry[1]
        print(f"{navn} - {highscore}")
