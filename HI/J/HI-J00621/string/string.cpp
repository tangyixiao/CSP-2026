#include<bits/stdc++.h>
using namespace std;
long long a[200001];
char x[200001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("strting.out","w",stdout);
	long long  n,l=0;
	string s=" ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>x[i];
		l+=a[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=x[i]; 
			
		}
	}
	int ans=0;
	int kl=1,kr=l;
	for(int i=1;i<=l/2;i++)
	{
		int j=l-i+1;
		if(s[i]==s[j])continue;
		ans++;
	}
	cout<<ans;
	return 0;
}

