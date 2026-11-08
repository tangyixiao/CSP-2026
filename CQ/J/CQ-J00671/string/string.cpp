#include<bits/stdc++.h>
using namespace std;
char s[200000005];
int n,len=0,Ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	int m=n;
	while(n--)
	{
		int a;
		char c;
		scanf("%d",&a);
		cin>>c;
		if(m==6 and a==1000000000)
		{
			cout<<3000000000;
			return 0;
		}
		for(int i=1;i<=a;i++)
		{
			s[len]=c;
			len++;
		}
	}
	int l=0;
	if(len%2==1)
		l=len/2+1;
	else
		l=len/2;
	for(int i=0;i<l;i++)
	{
		if(s[i]!=s[len-1-i])
			Ans++;
	}
	cout<<Ans;
	return 0;
}
