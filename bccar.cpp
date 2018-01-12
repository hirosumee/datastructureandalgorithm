/*
* @Author: termi
* @Date:   2018-01-11 16:28:07
* @Last Modified by:   termi
* @Last Modified time: 2018-01-11 20:36:14
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count,kq[1000];
	cin>>count;
	for(int i=0;i<count;i++)
	{
		int cP,p[20],max=0,min=99;
		cin>>cP;
		for(int j=0;j<cP;j++)
		{
			cin>>p[j];
			if(p[j]>max){max=p[j];}
			if(p[j]<min){min=p[j];}
		}
		kq[i]=(max-min)*2;
	}
	for(int i=0;i<count;i++)
	{
		cout<<kq[i]<<endl;
	}
}