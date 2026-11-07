#include <bits/stdc++.h>
using namespace std; 
double n,a[100000],b=0,d=0;
char c[100000];
string s="0";
int main() {
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	cin>>n;
	for (long long i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
		b=b+a[i];
	}
	for (long long i=0;i<n;i++)
	{
		for (long long j=0;j<a[i];j++)
		{
			if (s=="0") s=c[i];
			else s=s+c[i];
		}
	}
	for (long long i=0;i<b;i++)
	{
		if (s[i]!=s[b-1-i]) 
		{
			s[b-1-i]=s[i];
			d++;
		}
	}
	cout<<d;
	return 0;
}
