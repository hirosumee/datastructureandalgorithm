/*
* @Author: termi
* @Date:   2018-01-12 12:27:34
* @Last Modified by:   termi
* @Last Modified time: 2018-01-12 13:01:49
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long counter=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long  tm=1;
		for(int j=1;j<=i;j++)
		{
			tm*=2;
		}
		counter+=tm;
	}
	cout<<counter;
}