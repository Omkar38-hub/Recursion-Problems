#include<bits/stdc++.h>
using namespace std;

void subset(string s,string curr,int i)
{
	if(i==s.length())
	{
		cout<<curr<<"\n";
		return;
	}
	subset(s,curr,i+1);
	subset(s,curr+s[i],i+1);
}
int main()
{
	string str="ABC";
	cout<<"The all subsets of given string "<<str<<" is\n";
	int index=0;
	string curr="";
	subset(str,curr,index);
	return 0;
}
