#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
const int maxn=2e5+5;
int a[maxn];
void dfs(int cnt,int sum,int t)
{
	if(cnt>=m) 
	{
		ans=max(ans,sum);
		return;
	}
	for(int i=t+1;m-cnt<=n-i+1;i++)
		dfs(cnt+1,sum&a[i],i);
}
bool f(int x)
{
	x++;
	for(int i=1;i<=30;i++)
		if(pow(2,i)==x) return 1;
	return 0;
}
int main()
{	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n<=20){
		for(int i=1;i<=n;i++)
			dfs(1,a[i],i);
		cout<<ans;
	}
	else if(n>20 && n<=2000){
		if(m==1){
			for(int i=1;i<=n;i++) ans=max(ans,a[i]);
			cout<<ans;
		}
		else if(m==n){
			ans=a[1];
			for(int i=2;i<=n;i++) ans&=a[i];
			cout<<ans;
		}
		else if(m==2){
			for(int i=1;i<=n;i++)
				for(int j=i+1;j<=n;j++)
					ans=max(ans,a[i]&a[j]);
		}
	}
	else if(m!=n-1){
		bool f1=1,f2=1,f3=1;
		for(int i=1;i<=n;i++){
			if(!f(a[i])) f1=0;
			if(a[i]!=i-1) f2=0;
			if(a[i]>=4) f3=0;
		}
		if(f1==0){
			sort(a+1,a+1+n);
			ans=a[n];
			for(int i=n;i>=n-m+1;i--) ans&=a[i];
			cout<<ans;
		}
	}
	return 0;
}

