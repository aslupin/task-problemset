num = list()
for i in range(10):
	n = int(input())
	if(not(n%42 in num)):
		num.append(n%42)
print(len(num))

