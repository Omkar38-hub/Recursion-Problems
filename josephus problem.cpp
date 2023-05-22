#include<bits/stdc++.h>
using namespace std;
int find(int n,int k)
    {
         if(n==1)
        return 0;
        else
        {
            return((find(n-1,k)+k)%n);
        }
    }
 int josephus(int n, int k)
    {
        return 1+find(n,k);
      
    }
    
int main()
{
	int n=5;
	int k=3;
	cout<<"The survived person at last has position which is starting from 1 is "<<josephus(n,k);
	return 0;
}
