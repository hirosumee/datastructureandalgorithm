/*
* @Author: termi
* @Date:   2018-01-11 20:59:39
* @Last Modified by:   termi
* @Last Modified time: 2018-01-11 22:10:51
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count,kq[1000];
	cin>>count;
	for(int i=0;i<count;i++)
	{
		int x=0;
		long long number;
		cin>>x>>number;
		int c=0;
		for(long long j=2;(number-(j*(j-1)/2))/j>0;j++)
		{
			if((number-(j*(j-1)/2))>=0&&(number-(j*(j-1)/2))%j==0)
			{
				c++;
			}
		}
		kq[i]=c;
	}
	for(int j=0;j<count;j++)
	{
		cout<<j+1<<' '<<kq[j]<<endl;
	}
}