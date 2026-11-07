#include<bits/stdc++.h>
using namespace std; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	string c;
	cin >> n;
	string num="";
	int x = 0;
	for(int i = 1;i<=n;i++)
	{
		cin >> a >> c;
		x+=a;
		for(int j = 1;j<=a;j++)
		{
			num += c;
		}
	}
	int x2 = x;
	string numF="";
	while(x2)
	{
		numF+=num[x2-1];
		x2--;
	}
	if(num == numF)
	{
		cout << 0;
		return 0;
	}
	long long sum=0;
	for(int i = 0;i<x/2;i++)
	{
		if(num[i]!=numF[i])
		{
			sum++;
		}
	}
	cout <<sum;
	return 0;
}