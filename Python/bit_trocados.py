num = 1
lista = []

while(num != 0):
    num = int(input())
    lista.append(num)

l = [50,10,5,1] 
count = 1

for j in range(0,len(lista)-1):
    print("Teste ",count)
    
    for i in range(0,len(l)):
        quociente = lista[j]/l[i]
        resto = lista[j]%l[i]
        lista[j] = resto
        print(int(quociente), end = ' ')
        
    print("\n")
    count +=1 
