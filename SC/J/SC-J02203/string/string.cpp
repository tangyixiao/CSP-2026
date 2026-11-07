#include <bits/stdc++.h>
using namespace std;
long long x=0;
char store[10000005];
int main()
{
	int p;
	cin>>p;
	for(int i=1;i<=p;i++)
	{
		int n;
		char m;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			store[x]=m;
			x++;
		}
	}
	
	char store1[100005],store2[100005];
	//对数据进行切分，
	
	for(int i=1;i<=x/2;i++)
	{
		store1[i]=store[i];
		store2[i]=store[x-i+1];
	}//store1为中值左，store2为右的反转 
	int count=0;
	for(int i=1;i<=x/2;i++)
	{
		if(store1[i]!=store2[i])count++;
	}
	cout<<count;
}