#-*- coding:utf-8 -*-
"""
Created on Sun Aug 27 2017
@author: Rubens Lima
"""

def validaNome(pNome):
  if(len(pNome)>=1 and len(pNome)<=10):
    return True
  else:
    return False
    
def validarMao(pMao):
  if(len(pMao)>=0 and len(pMao)<=5):
    return True
  else:
    return False

numero_partidas = int(input())
campeao = []

if(numero_partidas>=0 and numero_partidas<=1000):
    nome1 = raw_input()
    
    if(validaNome(nome1)):
        nome2 = raw_input()
        
        if(validaNome(nome2)):
          for index in range(0,numero_partidas):
            mao1 = int(input())
            
            if(validarMao(mao1)):
              mao2 = int(input())
                
                if(validarMao(mao2)):
                  total = mao1+mao2
                  if(total % 2 == 0):
                    campeao.append(nome1)
                  else:
                    campeao.append(nome2)

print "Teste %d" % (numero_partidas)
for vencedor in campeao:
  print(vencedor)
