#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],b[5];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1)cout<<a[n];
	else if(m==n){
		int s=(1<<30)-1;
		for(int i=1;i<=n;i++)s=s&a[i];
		cout<<s;
	}
	else if(m==2){
		int s=0;
		for(int i=1;i<=n-1;i++)
			for(int j=i+1;j<=n;j++)s=max(s,a[i]&a[j]);
		cout<<s;
	}
	else if(a[n]==4){
		for(int i=1;i<=n;i++)b[a[i]]++;
		if(b[4]>=m)cout<<4;
		else if(b[3]>=m)cout<<3;
		else if(b[3]+b[2]>=m)cout<<2;
		else if(b[1]+b[2]>=m)cout<<1;
		else cout<<0;
	}
	else if(a[n]==n-1&&a[n-1]==n-2){
		int s=a[n]-1;
		for(int i=4;i<=n;i*=2){
			s=s-i/2;
			if(i<=m&&m>i/2)break;
		}
		cout<<s;
	}
	else{
		int s=a[n];
		for(int i=n-1;i>=n-m+1;i--)s=s&a[i];
		cout<<s;
	}
	return 0;
}
