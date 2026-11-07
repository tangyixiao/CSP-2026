#include<iostream>
#include<cstdio>
using namespace std;
int n;
int a[20005];
char s[20005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
	}
	int new1=0;
	for(int i=1;i<=n;i++)
	{
	
		for(int j=1;j<=n;j++)
		{
			if(a[i]>=a[j]&&s[i]!=s[j])
			{
				new1+=a[j];
				s[j]=s[i];
			}
		}
	}
	cout<<new1;
	fclose(stdin),fclose(stdout);
	return 0;
}