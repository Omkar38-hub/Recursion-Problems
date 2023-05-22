#include<bits/stdc++.h>
using namespace std;

bool is(int start,int end,string s)
{
  if(start>=end)
     return true;
  return ((s[start]==s[end])&&is(start+1,end-1,s));
}
int main()
{
	string str="abcdcba";
	int start=0;
	int end=str.length()-1;
	cout<<"The given string "<<str<<" is ";
	if(is(start,end,str))
	   cout<<"Palindrome\n";
	else
	   cout<<"Not Palindrome\n";
	return 0;
}
