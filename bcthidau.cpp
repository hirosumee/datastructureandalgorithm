#include<bits/stdc++.h>
using namespace std;
string champ;
int scr=0;
int miss=100000;
int main(){
	int count=0;
	cin>>count;
	for(int i=0;i<count;i++){
		string name;
		cin>>name;
		int ok=0,mis=0;
		for(int i=0;i<4;i++)
		{
			int t,m;
			cin>>t>>m;
			if(m!=0){
				ok++;
				mis+=(m+(t-1)*20);
			}
		}
		if(ok>scr){
			champ=name;
			scr=ok;
			miss=mis;
		}
		else
		{
			if(ok==scr&&mis<miss)
			{
				champ=name;
				miss=mis;
			}
		}
	}
	cout<<champ<<' '<<scr<<' '<<miss;
}