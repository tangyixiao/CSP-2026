#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n;
char ch[N];
int a[N];
int b[N]; 
int s[N];
int check(string s)
{
	int L=s.size();
	int ans=0;
	for(int i=0; i<=(L+1)/2; i++)
		if(s[i] != s[L-1-i])
			ans++;
	return ans;
}
pair<int, int> big_check(int first, int L, char A, int k)
{
	int ans=0;
	int t=first-s[n]+s[k];
	while(t>0) t-=b[k--];
	t=L;
	while(t>0)
	{
		if(t>a[k]){
			if(ch[k] != A)
				ans+=a[k], ch[k]=A;}
		else if(ch[k] != A)
			a[k]-=t, ans+=t, t=0;
		else if(t<=a[k])
			a[k]-=t, t=0;
		t-=a[k--];
		t=max(t, 0ll);
	}
	return {ans, k};
}
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i]>>ch[i];
		s[i]=s[i-1]+a[i];
		b[i]=a[i];
	}
	int ans=0, k=n;
	if(s[n]<=5e7)
	{
		string s;
		for(int i=1; i<=n; i++)
			for(int j=1; j<=a[i]; j++)
				s+=ch[i];
		ans=check(s);
		cout<<s<<endl;
	}
	else
		for(int i=1; i<=(n+1)/2; i++) 
		{
			pair<int, int> pii=big_check(s[i-1], a[i], ch[i], k+2);
			ans+=pii.first;
			k=pii.second;
		}
	cout<<ans<<endl;
	return 0;
}
