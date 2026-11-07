#include<bits/stdc++.h>
using namespace std;
long long a[100000000],n,m;
string s[10000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.ans","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
		if(a[i]%2==0)
		{
			m+=a[i];
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(s[i-1]!=s[i])
		{
			break;
		}
		if(i==n)
		{
			cout<<'0';
			return 0;
		}
	}
	cout<<m/2;
	return 0;
}
