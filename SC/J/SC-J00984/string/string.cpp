#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,a,l=0,ans=0;
string s;
char c;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;  cin>>c;
		l+=a;
		for(int j=l-a;j<l;j++)
		{
			s[j]=c;
		}
	}
	for(int i=0;i<l/2;i++)
	{
		if(s[i]==s[l-i-1])
		{
			continue;
		}else{
			s[l-1-i]=s[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
