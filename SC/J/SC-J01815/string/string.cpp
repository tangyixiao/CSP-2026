#include<bits/stdc++.h>
using namespace std;
char s[210000],s1[210000];
long long n,x,cnt=1,nn;
long long res;
char c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		cin>>c;
		for(int i=0;i<x;i++)
		{
			s[cnt]=c;cnt++;
		}
	}
	nn=cnt;
	for(int i=0;i<nn;i++)
	{
//		cout<<s[i]<<" ";
		s1[cnt]=s[i];
		cnt--;
	}
	for(int i=0;i<nn;i++)
	{
		if(s1[i]!=s[i])res++;
	}
	cout<<res/2;
	return 0;
 } 