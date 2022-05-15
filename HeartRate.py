nCases = int(input())

for i in range(0, nCases):
    b = 0.0
    p = 0.0
    tmp = ""
    line = input()
    for c in line:
        tmp = tmp + c
        if(c == " "):
            b = float(tmp)
            tmp = ""
    p = float(tmp)
    abpm = 60/p
    bpm = (60*b)/p

    print(bpm - abpm, bpm, bpm + abpm)



