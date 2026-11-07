#include<bits/stdc++.h>
using namespace std;
int n;
long long g,w=1,h;
char c;
char s[1001000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>g>>c;
		for(int j=1;j<=g;j++)
		{
			s[w]=c;
			w++;
		}
	}
	w--;
	for(int i=1;i<=w/2;i++)
	{
		if(s[i]!=s[w-i+1])
		{
			h++;
		}
	}
	cout<<h;
	return 0;
}