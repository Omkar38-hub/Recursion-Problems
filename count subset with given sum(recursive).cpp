#include<bits/stdc++.h>
using namespace std;

int count(int a[],int n,int sum)
{
	if(n==0)
	  return (sum==0)?1:0;
	return count(a,n-1,sum)+count(a,n-1,sum-a[n-1]);
}
int main()
{
	int a[]={10,20,15};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=25;
	cout<<"The number of subsets having sum equal to "<<sum<<" is ";
	cout<<count(a,n,sum);
	return 0;
}

// time complexity =)(2^n)
