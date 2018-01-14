/*
* @Author: termi
* @Date:   2018-01-13 18:34:07
* @Last Modified by:   shentury
* @Last Modified time: 2018-01-13 22:07:40
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long arr[6];
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	// for(int i=0;i<5;i++)
	// {
	// 	for(int j=i+1;j<6;j++)
	// 	{
	// 		if(arr[i]==arr[j])
	// 		{
	// 			long long e=arr[i];
	// 			long long a1=((i-i%2)/2);

	// 			a1=(arr[a1]==e?arr[a1+1]:arr[a1]);
	// 			long long a2=((j-j%2)/2);

	// 			a2=(arr[a2]==e?arr[a2+1]:arr[a2]);
	// 			long long a3;
	// 			switch(((i-i%2)/2)+((j-j%2)/2))
	// 			{
	// 				case 1:
	// 				{
	// 					a3=4;
	// 					break;
	// 				}
	// 				case 2:
	// 				{
	// 					a3=2;
	// 					break;
	// 				}
	// 				case 3:
	// 				{
	// 					a3=0;
	// 					break;
	// 				}
	// 			}
	// 			cout<<a1+a2<<' '<<e<<' '<<e+arr[a3]<<' '<<e+arr[a3+1]<<endl;
	// 			if(a1+a2==e+arr[a3]||a1+a2==e+arr[a3+1])
	// 			{
	// 				if(a1+a2==arr[a3]||a1+a2==arr[a3+1])
	// 				{
	// 					cout<<a1+a2;
	// 					exit(0);
	// 				}
	// 			}
	// 		}
	// 	}
	// }
	long long a=arr[0]*arr[1];
	long long b=arr[2]*arr[3];
	long long c=arr[4]*arr[5];
	long long d=0;
	for(int i=0;i<6;i++)
	{
		if(arr[i]>d)
		{
			d=arr[i];
		}
	}
	if(a+b+c==pow(d,2))
	{
		cout<<d;
		exit(0);
	}
	if(c+b+a==pow(d,2))
	{
		cout<<d;
		exit(0);
	}
	if(a+c+b==pow(d,2))
	{
		cout<<d;
		exit(0);
	}
	//
	long long max=0,sum=0;
	for(int i=0;i<6;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	for(int i=0;i<6;i++)
	{
		sum+=arr[i];
	}
	if(sum==max*4)
	{
		cout<<max;
		exit(0);
	}
	cout<<0;
}
