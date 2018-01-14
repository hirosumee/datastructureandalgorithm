/*
* @Author: termi
* @Date:   2018-01-13 22:07:50
* @Last Modified by:   shentury
* @Last Modified time: 2018-01-13 23:04:47
*/
#include<bits/stdc++.h>
using namespace std;
bool check(char in)
{
	string x="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-./:";
	for(int i=0;i<x.length();i++)
	{
		if(in==x[i])
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int cou;
	cin>>cou;
	for(int i=1;i<=cou;i++)
	{
		int x;
		cin>>x;
		int R;
		cin>>R;
		string S;
		cin>>S;
		string kq="";
		for(int j=0;j<S.length();j++)
		{
			if(check(S[j]))
			{
				for(int m=0;m<R;m++)
				{
					kq+=S[j];
				}
			}
		}
		cout<<i<<' '<<kq<<endl;
	}
}