#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200005];
	long long ans=0;
	char c[200005];
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s+=c[i];
	}
	long long sl=s.length();
	for(int i=0;i<sl/2;i++) if(s[i]!=s[sl-i-1]) ans++;
	cout<<ans;
	return 0;
}
