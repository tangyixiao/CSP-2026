#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000007],mx=-1,sum,f;
map<int,int> ma;
void dfs(int cnt,int sum,int ans){
	if(cnt>n){
		if(sum!=m) return;
		mx=max(mx,ans);
		return;
	}
	dfs(cnt+1,sum,ans);
	if(cnt==1) ans=a[1];
	else ans&=a[cnt];
	dfs(cnt+1,sum+1,ans);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
		if(i!=1) sum=(sum&a[i]);
		else sum=a[i];
		ma[a[i]]++;
		if(a[i]==f) f++;
	}
	if(m==2){
		mx=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,(a[i]&a[j]));
			}
		}
		cout<<mx;
		return 0;
	}
	if(m==n-1){
		mx=0;
		for(int i=1;i<=n;i++){
			int ans=0;
			for(int j=1;j<=n;j++){
				if(i!=1&&j==1) ans=a[j];
				if(i==j) continue;
				ans=(ans&a[j]);
			}
			mx=max(mx,ans);
		}
		cout<<mx;
		return 0;
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	if(n==m){
		cout<<sum;
		return 0;
	}
	if(mx<=4){
		if(ma[3]>=m) cout<<3;
		else if(ma[3]+ma[2]>=m) cout<<2;
		else if(ma[3]+ma[1]>=m) cout<<1;
		else cout<<0;
		return 0;
	}
	mx=0;
	dfs(1,0,0);
	cout<<mx;
	return 0;
}
