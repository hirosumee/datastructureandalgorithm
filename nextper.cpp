#include<iostream>
using namespace std;
bool gen(string& str)
{
  int i=str.length()-2;
  while(str[i]>str[i+1]){i--;}
  if(i>0){
    int j=str.length();
    while(str[j]>str[i]){j--};
    swap(str[i],str[j]);
    int k=i+1;
    while(k<str.length())
    {
      swap(str[k],str[str.length()-1-(k-i+1)]);
      k++;
    }
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
   int count=0;
   cin>>count;
   for(int i=0;i<count;i++)
   {
     int index=0;
     string str;
     cin>>index;
     cin>>str;
     if(gen(str))
     {
       cout<<str;
     }
     else
     {
       cout<<"BIGGEST";
     }
   }
}
