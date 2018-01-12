/*
* @Author: termi
* @Date:   2018-01-11 23:30:19
* @Last Modified by:   termi
* @Last Modified time: 2018-01-12 11:32:33
*/
#include<bits/stdc++.h>
using namespace std;
long long proc(string inp){
	long long kq=0;
	for(int i=0;i<inp.length();i++)
	{
		int n=inp[i]-'0';
		if(n>4){n--;}
		kq=kq*9+n;
	}
	return kq;
}
int main()
{
	while(true)
	{
		string inp;
		cin>>inp;
		if(inp!="0")
		{
			cout<<inp<<": "<<proc(inp)<<endl;
		}
		else
		{
			break;
		}
	}
}