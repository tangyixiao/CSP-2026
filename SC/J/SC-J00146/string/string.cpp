#include<bits/stdc++.h>
using namespace std;
int a[20005];
char b[20005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long s=0;
	char renle;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
		cin>>b[i];
		renle=b[i];
	} 
	int o=1;
	for(int i=1;i<=n;i++)
	{
		if(b[i]!=renle)
		{
			o=0;
		}
	}
	if(o==1)
	{
		cout<<0;
		return 0;	
	}	
	if(n==1) cout<<0;
	else s=s/2;
	cout<<s;
	return 0;
}