#include<bits/stdc++.h>
using namespace std;
void compress(long num)
{
  if(num<10)
  {
   cout<<num;
  }
  else
  {
   long tmp=0;
   while(num>0)
   {
     tmp+=(num%10);
     num/=10;
   }
   compress(tmp);
  }
}
int main()
{
  cout<<'a';
  int count=0;
  long inp[1000];
  cin>>count;
  for(int i=0;i<count;i++)
  {
   cin>>inp[i];
  }
  for(int i=0;i<count;i++)
  {
   compress(inp[i]);
  }
  return 0;
}