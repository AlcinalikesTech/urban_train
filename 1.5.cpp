

#include<iostream>
using namespace std;
int main()
{
	int n=3;
	

	int j=0;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=2*(n-i);k++)
		{
			cout<<" ";
		}
		for(int p=1;p<=2*i-1;p++,j++)
		{
			cout<<(char)(j+65)<<" ";
		}
		cout<<"\n";
	}
	return 0;
}