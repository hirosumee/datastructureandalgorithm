/*
* @Author: shentury
* @Date:   2018-01-13 23:09:18
* @Last Modified by:   shentury
* @Last Modified time: 2018-01-13 23:19:57
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string inp;
	cin>>inp;
	if(inp.length()%3==2)
	{
		inp='0'+inp;
	}
	else
	{
		if(inp.length()%3==1)
		{
			inp="00"+inp;
		}
	}
	for(int i=0;i<inp.length()-2;i+=3)
	{
		cout<<(inp[i]-'0')*4+(inp[i+1]-'0')*2+(inp[i+2]-'0')*1;
	}
}