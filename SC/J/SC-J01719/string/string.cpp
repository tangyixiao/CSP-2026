#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
char k[1000000001];
int n[1000001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string S,c;
	int a,d;
	cin>>a; 
	for(int i=1;i<=a;i++)
	{
		cin>>d>>c;
		for(int j=0;j<d;j++)
		{
			S=S+c;
		}
	}
	int b=S.size();
	for(int i=0;i<=b;i++)
	{
		k[i]=S[i];
	}
	for(int i=0;i<=b;i++)
	{
		if(k[i]!=k[b-1-i])
		{
			n[i]=1;
		}	
	}
	int cnt=0;
	for(int j=0;j<b;j++)
	{
		if(n[j]==1);
		cnt++;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}