# -*- coding: utf-8 -*-
# @Author: termi
# @Date:   2018-01-12 23:01:22
# @Last Modified by:   shentury
# @Last Modified time: 2018-01-13 17:01:48
# chemis="((CH)2(OH2H)(C(H))O)3";
chemis='CH3(COOH)3'
chemis='('+chemis+')'
speci=[];
for index in range(len(chemis)):
	if chemis[index]=='(':
		speci.append(0)
	elif chemis[index]=='C':
		speci.append(12)
	elif chemis[index]=='O':
		speci.append(16)
	elif chemis[index]=='H':
		speci.append(1)
	elif chemis[index]==')':
		pos=0
		sumer=0
		for i in range(len(speci)):
			if speci[i]==0:
				pos=i
		if 1==1:
			for i in range(pos,len(speci)):
				sumer+=speci[i]
			speci[pos]=sumer
			del speci[pos+1:index]
	elif int(chemis[index])>=2 and int(chemis[index])<=9:
		speci[len(speci)-1]*=(int(chemis[index]))
print speci[0]
			


