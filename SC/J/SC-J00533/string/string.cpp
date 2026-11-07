#include <bits/stdc++.h>
using namespace std;
int n,ans;
int a[100005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		s+=a[i]*a[i+2]; 
	}
	int l=s.size();
	for(int i=1;i<=n;i++)
	{
		if(s[i]=s[l+1-i])
		{
			continue;
		}
		else
		{
			s[i]=s[l+1-i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}