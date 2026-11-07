#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	int b[100000];
	string a,s;	
	for(int i=1;i<=n;i++)
	{
		cin>>b[i]>>a[i];
	}
	s=a;
	for(int j=1;j<=n;j++)
	{
		if(s[j]!=s[n+1-j])
		{
			s[j]=s[n+1-j];
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
