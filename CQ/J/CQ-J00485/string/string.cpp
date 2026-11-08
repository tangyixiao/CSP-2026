#include<bits/stdc++.h>//拿右边去对应左边 ，暴力一眼有问题 
using namespace std;
int a[200005];
char b[200005];
long long s1[200005];
int n;
long long ans;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s1[i]=s1[i-1]+a[i];//前缀和 
	}
	for(int i=1;i<=n;i++){
		long long l1=s1[i-1]+1;
		long long l2=s1[i];
		if(l1>s1[n]/2)break;
		l2=min(l2,s1[n]/2);
		long long r1=s1[n]+1-l1;
		long long r2=s1[n]+1-l2;
		int x=lower_bound(s1+1,s1+1+n,r1)-s1;
		int y=lower_bound(s1+1,s1+1+n,r2)-s1;
		for(int j=y;j<=x;j++){
			if(b[i]!=b[j]){
				ans+=min(r1,s1[j])-max(s1[j-1]+1,r2)+1;
			}
		}
	}
	cout<<ans;
	return 0;
}
