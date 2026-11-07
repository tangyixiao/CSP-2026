#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e7+10;
ll n,a[N],ans,num;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string c;
		cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++)
		{
			s+=c;
		}
	}
	num=s.size();
	for(int i=0;i<num;i++)
	{
		if(i==num-i-1)
		{
			break;
		}
		if(s[i]!=s[num-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
