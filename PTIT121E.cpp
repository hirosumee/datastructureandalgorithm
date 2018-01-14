/*
* @Author: shentury
* @Date:   2018-01-13 00:58:11
* @Last Modified by:   termi
* @Last Modified time: 2018-01-13 15:34:56
*/
#include<bits/stdc++.h>
#include <sstream>
using namespace std;
template <typename T>
  std::string toS ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }
string sum(string par,int head)
{
	int tail=par.length()-1;
	for(int i=head;i<par.length();i++)
	{
		if(par[i]==')')
		{
			tail=i;
			break;
		}
	}
	string tmp="";
	for(int i=head+1;i<tail-1;i++)
	{
		tmp+=par[i];
	}
	char tmp1[50];
	strcpy(tmp1,tmp.c_str());
	cout<<tmp1<<endl;
	int a=0;
	char *p=strtok(tmp1," ");
	while(p!=NULL)
	{
		cout<<p<<"'***'"<<endl;
		a+=atoi(p);
		p=strtok(NULL," ");
	}
	if(tail<par.length()-1)
	{
		a*=(par[tail+1]-'0');
	}
	par=par.replace(head,tail+3-head,toS(a));
	if(par[0]=='('){par+=" )";}
//	cout<<par<<endl;
	return par;
}
int main()
{
	string inp,out;
	cin>>inp;
	if(inp[0]!='(')
	{
		inp='('+inp+')';
	}
	for(int i=0;i<inp.length();i++)
	{
		switch(inp[i])
		{
			case 'C':
			{
				if(i<inp.length()-1&&inp[i+1]>='2'&&inp[i+1]<='9')
				{
					out+=toS(12*(inp[i+1]-'0'));
					i++;
				}
				else
				{
					out+=" 12 ";
				}
				break;
			}
			case 'O':
			{
				if(i<inp.length()-1&&inp[i+1]>='2'&&inp[i+1]<='9')
				{
					out+=toS(16*(inp[i+1]-'0'));
					i++;
				}
				else
				{
					out+=" 16 ";
				}
				break;
			}
			case 'H':
			{
				if(i<inp.length()-1&&inp[i+1]>='2'&&inp[i+1]<='9')
				{
					out+=toS((inp[i+1]-'0'));
					i++;
				}
				else
				{
					out+=" 1 ";
				}
				break;
			}
			default:{
				out+=inp[i];
			}
		}
	}
	cout<<out<<endl;
	while(out[0]=='(')
	{
		int pos=0;
		for(int i=0;i<out.length();i++)
		{
			if(out[i]=='(')
			{
				pos=i;
			}
		}
		out=sum(out,pos);
	}
	cout<<out;
}