#include<iostream>
using namespace std;
int n,a[200001],i,j;
long long s=0,t=0,ans;
char b[200001];
string str;
void odd()
{
	while(s-t!=0)
	{
		t++;
		if(str[s+t]!=str[s-t])
		{
			ans++;
		}
	}
	return;
}
void notodd()
{
	while(s-t!=0)
	{
		t++;
		if(str[s+t]!=str[s-t+1])
		{
			ans++;
		}
	}
	ans++;
	return;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		for(j=1;j<=a[i];j++)
		{
			str+=b[i];
		}
	}
	s=str.length();
	if(s%2==1)
	{
		s++;
	}
	s/=2;
	s--;
	if(s%2==0)
	{
		odd();
	}
	else
	{
		notodd();
	}
	cout<<ans;
	return 0;
}
