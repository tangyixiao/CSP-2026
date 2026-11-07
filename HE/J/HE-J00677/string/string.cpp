#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long m=0;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++)
	{
		int a;char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++)
		{
			s+=c;
		}
		m+=a;
	}
	long long ans=0;
	for(int i=0;i<(s.size()+1)/2;i++)
	{
//		cout<<i<<" "<<s[i]<<" "<<m-i-1<<" "<<s[m-i-1]<<endl;
		if(s[i]!=s[m-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
