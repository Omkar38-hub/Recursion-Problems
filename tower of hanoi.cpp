#include<bits/stdc++.h>
using namespace std;

void toh(int n,char A,char B,char C)
{
	if(n==1)
	{
		cout<<"Move disc 1 from "<<A<<"  to "<<C<<endl;
		return;
	}
	toh(n-1,A,C,B);
	cout<<"Move disc "<<n<<" from "<<A<<"  to "<<C<<endl;
	toh(n-1,B,A,C);
}
int main()
{
	int n=3;
	char A='A',B='B',C='C';
	cout<<"The moves of moving disc from "<<A<<" to "<<C<<" are\n";
	toh(n,A,B,C);
	return 0;
}
// time complexity =O(n)
