#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int s[200005],s1[200005];
int ans;
void dfs(int s,int x,int k){
	if(s==m){
		ans=max(ans,k);
		return;
	}
	if(x>=n)return;
	for(int i=x+1;i<=n;i++){
		if(k==-1)dfs(s+1,i,a[i]);
		else dfs(s+1,i,k&a[i]);
	}
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=20){
		dfs(0,0,-1);
		cout<<ans;
		return 0;
	}
	if(n<=2000){
		if(m==1){
			int s=0;
			for(int i=1;i<=n;i++)s=max(s,a[i]);
			cout<<s; 
		}else if(m==n){
			int ss=a[1];
			for(int i=2;i<=n;i++)ss&=a[i];
			cout<<ss;
		}else{
			int k=0;
			for(int i=1;i<n;i++){
				for(int j=i+1;j<=n;j++){
					k=max(k,a[i]&a[j]);
				}
			}
			cout<<k;
		}
		return 0;
	}
	if(m==n-1){
		s[1]=a[1];s1[n]=a[n];
		for(int i=2;i<=n;i++)s[i]=s[i-1]&a[i];
		for(int i=n-1;i>=1;i--)s1[i]=s1[i+1]&a[i];
		int k=0;
		for(int i=1;i<=n;i++){
			if(i==1)k=max(k,s1[2]);
			else if(i==n)k=max(k,s[n-1]);
			else k=max(k,s[i-1]&s1[i+1]);
		}
		cout<<k;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	int q=a[1];
	for(int i=1;i<=m;i++)q&=a[i];
	cout<<q;
	return 0;
}
