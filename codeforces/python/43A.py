n = int(input())
txt = [input() for i in range(n)]
check = 0
ans = ""
for i in txt[0]:
    check = 0
    for j in txt:
        if(j.find(i) != -1):check += 1
    if(check == n):ans += i
print(ans)
