def main():
    howMany = int(input())
    
    for i in range(howMany):
        listHT = ["TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"]
        DictHT = {"TTT":0, "TTH":0, "THT":0, "THH":0, "HTT":0, "HTH":0, "HHT":0, "HHH":0}
        listStr = []
        dataNum = int(input())
        string40 = input()

        for i in range(0, 41):
            if (len(string40[i:i+3]) == 3):
                listStr.append(string40[i:i+3])

        for element in listStr:
            if element in DictHT:
                print(element)
                print(DictHT)
                DictHT[element] += 1

        answerStr = str(dataNum)
        for element in listHT:
            if element in DictHT:
                answerStr += " " + str(DictHT[element])

        print(len(listStr)) 

        print(answerStr)
    
    
main()