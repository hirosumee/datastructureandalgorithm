/*
* @Author: termi
* @Date:   2018-01-14 14:51:34
* @Last Modified by:   shentury
* @Last Modified time: 2018-01-14 15:32:57
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true)
	{
		int count=0;
		cin>>count;
		if(!count)
		{
			break;
		}
		else
		{
			int templat[51];
			for(int i=0;i<50;i++)
			{
				templat[i]=0;
			}
			for(int i=0;i<count;i++)
			{
				for(int j=0;j<6;j++)
				{
					long long  temp;
					cin>>temp;
					if(temp>=1&&temp<=49)
					{
						templat[temp]++;
					}
				}
			}
			bool flag=true;
			for(int i=1;i<=49;i++)
			{
				if(templat[i]==0)
				{
					flag=false;
				}
			}
			if(flag)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
	}
}