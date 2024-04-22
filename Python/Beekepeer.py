from sys import exit

def main():
    while True:
        n = int(input())
        if n == 0:
            False
            break
        listInput = []
        for i in range(n):
            listInput.append(input(""))
        print(listInput[billsWord(listInput)])



def billsWord(wordsList): #controlla la lista di parole e sceglie quella con maggior doppie vocali
    indexMax = -1
    max = 0
    word = ""
    vocal = {"a","e","i","o","u","y"}
    for i in range(len(wordsList)):
        word = wordsList[i]
        counter = 0
        for j in range(len(word)-1):
            if len(word) > 1 and word[j] == word[j+1] and word[j] in vocal:
                if j  < len(word) - 2 and word[j+1] == word[j+2]:
                    break
                counter += 1
            if counter > max:
                max = counter
                indexMax = i
    return indexMax

main()