#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,a[200005],l,c=1,ans;
char c1[200005];
string s1,s2;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out ","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c1[i];
		l+=a[i];
	}for(ll i=1;i<=l;i++)
		s1[i]='0';
	for(ll i=1;i<=n;i++){
		s1[c]=c1[i];
		c+=a[i];
	}for(ll i=1;i<=l;i++){
		if(s1[i]=='0')
		s1[i]=s1[i-1];
	}for(ll i=1;i<=l;i++){
		s2[i]=s1[l+1-i];
	}int m=l/2;
	for(ll i=1;i<=m;i++){
		if(s1[i]!=s2[i])
		ans++; 
	}if(l%2&&s1[m+1]!=s2[m+1])
	ans++;
	cout<<ans;
	return 0;
}
