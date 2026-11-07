#include<bits/stdc++.h>
using namespace std;
int a[1000005];
bool vis[1000005];
int ans=-1;
int n,m;
void dfs(int x,int y){
	if(x>m){
		ans=max(ans,y);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			int h;
			if(x==1){
				h=a[i];
			}else{
				h=y&a[i];
			}
			dfs(x+1,h);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	bool flag=1;
	cin>>n>>m;
	cin>>a[1];
	int b=a[1];
	int maxn=-1038;
	for(int i=2;i<=n;i++){
		cin>>a[i];
		b&=a[i];
		maxn=max(maxn,a[i]);
		if(a[i]%2){
			flag=0;
		}
	}
	if(n<=20){
		dfs(1,1);
		cout<<ans;
		return 0;
	}else if(m==1){
		cout<<maxn;
		return 0;
	}else if(m==n){
		cout<<b;
		return 0;
	}else if(m==2){
		int sum=-1038;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				sum=max(sum,a[i]&a[j]);
			}
		}
		cout<<sum;
		return 0;
	}else if(m==n-1){
		int sum=-1038,k;
		for(int i=1;i<=n;i++){
			if(i==1){
				k=a[2];
			}else{
				k=a[1];
			}
			for(int j=1;j<=n;j++){
				if(i!=j){
					k&=a[j];
				}
			}
			sum=max(sum,k);
		}
		cout<<sum;
		return 0;
	}else if(flag==1){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	return 0;
}