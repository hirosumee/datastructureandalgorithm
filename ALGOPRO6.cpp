/*
* @Author: termi
* @Date:   2018-01-12 14:11:51
* @Last Modified by:   termi
* @Last Modified time: 2018-01-12 23:00:09
*/
	//31 1
	//28||29 2
	//31 3
	//30 4
	//31 5
	//30 6
	//31 7
	//31 8
	//30 9
	//31 10
	//30 11
	//31 12
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year;
	cin>>year;
	int Eday=(((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)?29:28);
	int E1_28=154;
	int E1_29=165;
	int E1_30=168;
	int E1_31=172;
	//
	int ngay=(((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)?E1_29:E1_28)+E1_30*4+E1_31*7;
	int thang=31+Eday*2+31*3+30*4+31*5+30*6+31*7+31*8+30*9+31*1+30*2+31*3;
	//
	int extra=0;
	int x=year;
	while(year>0)
	{
		extra+=year%10;
		year/=10;
	}
	cout<<ngay+thang+(((x % 4 == 0) && (x % 100!= 0)) || (x%400 == 0)?366:365)*extra;


}
