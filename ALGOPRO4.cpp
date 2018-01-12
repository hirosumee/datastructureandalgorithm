/*
* @Author: termi
* @Date:   2018-01-12 11:53:22
* @Last Modified by:   termi
* @Last Modified time: 2018-01-12 12:27:13
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string inp;
	cin>>inp;
	string kq="";
	for(int i=inp.length()-1;i>=0;i-=3)
	{
		int a=inp[i]-'0';
		int b=0;
		int c=0;
		if(i-1>=0)
		{
			b=inp[i-1]-'0';
			if(i-2>=0)
			{
				c=inp[i-2]-'0';
			}
		}
		int tmp=a*1+b*2+c*4;
		char t=(tmp+'0');
		kq=t+kq;
	}
	cout<<kq;
}