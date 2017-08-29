# -*- coding: utf-8 -*-
"""
Created on Mon Aug 28 22:04:03 2017

@author: Rubens
"""
n = int(input())
Sd = 0

if(n>=1 and n<=1000):
    for index in range(0,n):
        t = int(input())
        if(t>=1 and t<=100):
            v = int(input())
            if(v>=0 and v<=120):
                d = t*v
                Sd = Sd + d
    
    print "%d" % (Sd)
else:
    0