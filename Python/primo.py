# -*- coding: utf-8 -*-
n = int(input())
sim=0
nao=0
if(n>2147483647):
    0
elif (n==1):
    print "sim"
else:
    if(n<0):
        n = n*(-1)
    for index in range(1,n):
        if(n%index == 0 or n == index):
            sim = sim + 1
        if(n%index == 0 and n != index):
            nao = nao + 1
        
    if (nao > 0 and sim !=1):
        print "nao"
    elif(nao != 0  and sim == 1):
        print "sim"