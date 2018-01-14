/*
* @Author: termi
* @Date:   2018-01-13 00:39:46
* @Last Modified by:   termi
* @Last Modified time: 2018-01-13 00:41:37
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int red,blue;
	cin>>red>>blue;
	cout<<min(red,blue)<<' '<<abs(red-blue)/2;
}