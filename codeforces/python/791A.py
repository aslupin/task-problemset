txt = [int(n) for n in input().split()]
i = 0
while True:
    i += 1
    txt[0] *= 3
    txt[1] *= 2
    if(txt[0] > txt[1]):break
print(i)
