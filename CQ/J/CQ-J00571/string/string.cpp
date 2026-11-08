#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
int n;
int a[N];
char ch[N];
string lcx;
ll ans;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) 
		cin>>a[i]>>ch[i];
	int l=1,r=n,k1=a[1],k2=a[n];
	while(l<=r)
	{
		if(k1<k2) 
		{
			if(ch[l]!=ch[r]) ans+=k1;
			k2-=k1;l++;k1=a[l];	
		} 
		else if(k2<k1) 
		{
			if(ch[l]!=ch[r]) ans+=k2;
			k1-=k2;r--;k2=a[2];	
		} 
		else 
		{
			if(ch[l]!=ch[r]) ans+=k2;
			l++;r--;k1=a[l];k2=a[r];
		}
	}
	cout<<ans;
	return 0;	
} 

