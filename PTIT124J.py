# -*- coding: utf-8 -*-
# @Author: termi
# @Date:   2018-01-13 23:04:58
# @Last Modified by:   termi
# @Last Modified time: 2018-01-14 14:24:32

inp=raw_input()

if len(inp)%3==1:
	inp="00"+inp
elif len(inp)%3==2:
	inp='0'+inp
i=0
kq=""
while i<len(inp)-2:
	kq+= str(int(inp[i])*4+int(inp[i+1])*2+int(inp[i+2])*1);
	i+=3
print kq

