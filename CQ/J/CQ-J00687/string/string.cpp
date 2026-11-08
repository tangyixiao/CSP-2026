#include<bits/stdc++.h>
using namespace std;
int a[500005];
char c[500005];
int main()
{
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	long long num=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	if(n==2&&c[1]==c[2])
	{
		cout<<"0";
		return 0;
	}
	for(int i=1;i<=n/2;i++)
	{
		if(a[i]==0||a[i]==a[n+1-i]&&c[i]==c[n+1-i]) continue;
		if(a[i]==a[n+1-i]&&c[i]!=c[n+1-i]) num+=a[i];
		else if(a[i]!=a[n+1-i]&&c[i]!=c[n+1-i])
		{
			num+=a[i];
			a[i+1]=a[i+1]-a[i]+a[n+1-i];
		}
		else if(a[i]!=a[n+1-i]&&c[i]==c[n+1-i])
		{
			num=num+abs(a[i]-a[n+1-i]);
			a[i+1]-=abs(a[i]-a[n+1-i]);
		}
	}
	cout<<num;
	
	return 0;
}
