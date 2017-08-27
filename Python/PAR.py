#-*- coding:utf-8 -*-
"""
Created on Sun Aug 27 2017
@author: Rubens Lima
"""

numero_partidas = int(input())

if(numero_partidas>=0 and numero_partidas<=1000):
    nome1 = raw_input()
    
    if(len(nome1)>=1 and len(nome1)<=10):
        nome2 = raw_input()
        
        if(len(nome2)>=1 and len(nome2)<=10):
    
            mao1 = int(input())
            mao2 = int(input())
            total = mao1+mao2
            if(total % 2 == 0):
                print(nome1)
            else:
                print(nome2)
