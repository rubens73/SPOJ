total = 0
for i in range(4):
	tomadas = int(input())
	if(tomadas>=2 and tomadas<=6):
		total = total + tomadas
	else:
		break
if(total > 4 ):
    total = total-3
print(total)
