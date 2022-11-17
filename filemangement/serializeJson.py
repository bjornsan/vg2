import json

class Temperature():
    def __init__(self, temp, sted):
        self.temp = temp
        self.sted = sted
    
    def toJson(self):
        return json.dumps(self, default=lambda o: o.__dict__, 
            sort_keys=True, indent=4)


if __name__ == "__main__":
    t1 = Temperature(22, "nowhere")
    t2 = Temperature(34, "nowhere more")
    temps = [t1, t2]
   # t1Json = t1.toJson()
   # print(t1Json)

    json_string = json.dumps([ob.__dict__ for ob in temps])
    print(json_string)
   