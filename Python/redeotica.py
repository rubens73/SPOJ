# -*- coding: utf-8 -*-
"""
Spyder Editor

Este é um arquivo de script temporário.
"""

tabas = 0
ramos = 0
aux = list()

while(True):
    tabas = int(input())
    
    if tabas == 0:
        break
    
    if tabas > 100:
        exit(0)
        break
        
    ramos = int(input())
    if ramos < 1 or ramos > (tabas*(tabas-1)/2):
        exit(0)
        break
    
    matrix = [0] * ramos
        
    for i in range (ramos):
        matrix[i] = [0]*3
        
        for j in range(3):
             dados = int(input())
             
             if dados < 1 or dados > 100:
                 exit(0)
                 break
             
             matrix[i][j] = dados
            
    aux.append(matrix)
    
for index in range(len(aux)):
    
    print("Teste ", index+1)
    
    taba_x = aux[index][index][0]
    taba_y = aux[index][index][1]
    menor = aux[index][index][2]
    
    #for i in range(len(aux[index])):