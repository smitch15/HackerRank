def main():
    DictNum = {"one": 1, "two": 2, "three": 3, "four": 4, "five": 5, "six": 6, "seven": 7, "eight": 8, "nine": 9, "ten": 10, "eleven": 11, "twelve":12, "teen": 10, "twenty": 20, "thirty": 30, "forty": 40, "fifty": 50, "sixty": 60, "seventy": 70, "eighty": 80, "ninety": 90}
    
    listOp = ["plus", "minus", "times", "divided by"]
    sentence = input()
    
    wordList = []
    while(sentence.find(' ') != -1):
        wordList.append(sentence[0:sentence.find(' ')])
        sentence = sentence[sentence.find(' ')+1:]
    wordList.append(sentence)

    for word in wordList:
        if ((word[len(word) - 4: len(word)] == "teen") and (word != "teen")):
             wordList.insert(wordList.index(word)+1, word[len(word) - 4: len(word)])
             wordList[wordList.index(word)] = word[:len(word) - 4]

    
            
    for word in wordList:
        if word in Dict0:
            
        
    print(wordList)
    
main()
