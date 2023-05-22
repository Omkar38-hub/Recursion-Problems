#include<bits/stdc++.h>
using namespace std;

int piece(int n,int a,int b,int c)
{
	if(n==0)
	  return 0;
	if(n<0)
	  return -1;
	int res=max({piece(n-a,a,b,c),piece(n-b,a,b,c),piece(n-c,a,b,c)});
	if(res==-1)
		return -1;
	return res+1;
}
int main()
{
	int n=23;
	int a=11,b=9,c=12;
	cout<<"The maximum cuts of rope is ";
	cout<<piece(n,a,b,c)<<"\n";
	return 0;
}

//Time complexity is O(3^n)
