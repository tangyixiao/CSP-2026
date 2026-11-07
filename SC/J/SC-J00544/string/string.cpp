#include<bits/stdc++.h>
using namespace std;
int n,a[200050],k,b;
char c;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>c;
		for(j=1;j<=a[i];j++)
		{
			s[k]=c;
			k++;
		} 
	}
	for(i=0;i<k/2;i++)
	{
		if(s[i]!=s[k-i-1])
		{
			b++;
		}
	}
	cout<<b;
	return 0;
}