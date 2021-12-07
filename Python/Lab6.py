#!/usr/bin/env python

def GeomProgSum(n):
	if n > 1:
		Return = n + GeomProgSum(n/2)
	else:
		Return = 1
	return Return

Res = GeomProgSum(50)
print("Результат: "+str(Res))