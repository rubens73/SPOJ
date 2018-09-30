test_list = list()
while(True):
	try:
		participants = input().split(" ")
		participants = int(participants[0])
	except EOFError:
		break
	
	if participants < 0 and participants > 10000:
		break
	elif participants == 0:
		break
	else:
		participants_list = list()
		aux = input().split(" ")
		for index in range(len(aux)):
			participants_list.append(int(aux[index]))
		test_list.append(participants_list)
		
for i in range(len(test_list)):
	print("Teste ", i+1)
	for j in range(len(test_list[i])):
		if (j+1 == test_list[i][j]):
			print(test_list[i][j])
			break
	print("\n")