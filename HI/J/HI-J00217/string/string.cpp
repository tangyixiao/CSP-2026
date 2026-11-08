#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n,a;
	cin>>n;
	string a1="0";
	char m;
	for(int i=0;i<n;i++)
	{
		cin>>a>>m;
		for(int j=0;j<a;j++)
			a1+=m;
	}
	long long b=0;
	int d=a1.size();
	for(int i=1;i<=d/2;i++)
	{
		if(a1[i]!=a1[d-i])
			b++;
	}
	cout<<b;
	
	return 0;
}
