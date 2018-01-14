# -*- coding: utf-8 -*-
# @Author: termi
# @Date:   2018-01-14 14:29:41
# @Last Modified by:   termi
# @Last Modified time: 2018-01-14 14:47:51
while True :
	template=[]
	for index in range(51):
		template.append(0)
	count=int(raw_input())
	if count!=0:
		for index in range(count):
			for indexx in range(6):
				template[int(raw_input())]+=1
		flag=True
		for index in range(1,51):
			if template[index]==0:
				print 'No'
				flag=False
				break
		if flag :
			print 'Yes'
	else:
		break

	
