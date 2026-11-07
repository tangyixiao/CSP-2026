#include<iostream>
using namespace std;
string s;
int n,x,c;
char y,p;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%d%c%c",&x,&p,&y);
		for(int j=1;j<=x;++j)
		{
			s=s+y;
		}
	}
	for(int i=0;i<s.size()/2;++i)
	{
		if(s[i]!=s[s.size()-i-1])
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}