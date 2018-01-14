/*
* @Author: shentury
* @Date:   2018-01-14 15:35:13
* @Last Modified by:   shentury
* @Last Modified time: 2018-01-14 15:44:42
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string inp;
	cin>>inp;
	bool isdel=false;
	for(int i=0;i<=inp.length();i++)
	{
		if(inp[i]=='0')
		{
			for(int j=0;j<inp.length();j++)
			{
				if(j!=i)
				{
					cout<<inp[j];
				}
			}
			isdel=true;
			break;
		}
	}
	if(!isdel)
	{
		for(int i=0;i<inp.length()-1;i++)
		{
			cout<<inp[i];
		}
	}
}