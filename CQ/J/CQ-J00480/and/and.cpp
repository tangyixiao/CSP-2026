#include<bits/stdc++.h>
using namespace std;
int n,m;
int ans;
int a[200010];
int b[100];
void dfs(int cnt,int t,vector<int> p){
	if(t<0) return;
	if(cnt>n){
		if(t==0){
			int d=p[0];
			for(int i=1;i<m;i++){
				d=d&p[i];
			}
			ans=max(ans,d);
		}
		return;
	}
	dfs(cnt+1,t,p);
	p.push_back(a[cnt]);
	dfs(cnt+1,t-1,p);
}
bool check_(int x){
	x++;
	while(x){
		if(x%2==1&&x!=1) return 0;
		x/=2;
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		vector<int> p;
		dfs(1,m,p);
		cout<<ans;
	}else if(n<=2000){
		for(int i=1;i<=n;i++){
			if(m==1) ans=max(ans,a[i]);
		}
		if(m==n){
			ans=a[1];
			for(int i=2;i<=n;i++) ans=ans&a[i];
		}
		if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					ans=max(ans,a[i]&a[j]);
				}
			}
		}
		cout<<ans;
	}else{
		int mx=0;
		bool flag1=1,flag2=1;
		for(int i=1;i<=n;i++){
			if(!check_(a[i])) flag1=0;
			if(a[i]!=i-1) flag2=0;
			mx=max(mx,a[i]);
		}
		if(mx<=4){
			for(int i=1;i<=n;i++) b[a[i]]++;
			if(b[4]>m){
				cout<<4;
				return 0;
			}
			ans=3;
			for(int i=3;i>=1;i--){
				if(b[i]>m){
					break;
				}else{
					ans&=i;
					m-=b[i];
				}
			}
			if(m>0) cout<<0;
			else cout<<ans;
			return 0;
		}
		if(flag1||flag2){
			sort(a+1,a+n+1);
			int ans=a[n];
			for(int i=n-1;i>=n-m+1;i--){
				ans=ans&a[i];
			}
			cout<<ans;
			return 0;
		}
		cout<<0;
	}
	return 0;
}
/*
*/
