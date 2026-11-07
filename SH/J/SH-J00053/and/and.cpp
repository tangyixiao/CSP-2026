#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans=0;
int n,m;
int a[200005];
bool flag[200005];
void dfs(int dep,int sum1,int sum){
	if(dep>n){
		if(sum1==m){
			int x=1;
			for(int i=1;i<=n;i++){
				if(flag[i]==1){
					if(x==1){
						sum=a[i];
						x=0;
					}
					else{
						sum&=a[i];
					}
				}
			}
			ans=max(ans,sum);
		}
		return;
	}
	flag[dep]=1;
	dfs(dep+1,sum1+1,(sum&a[dep]));
	flag[dep]=0;
	dfs(dep+1,sum1,sum);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int x=1;
	int sum=0;
	if(m==1){
		for(int i=1;i<=n;i++){
			sum=max(sum,a[i]);
		}
		cout<<sum;
		return 0;
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			if(x==1){
				sum=a[i];
				x=0;
			}
			else{
				sum&=a[i];
			}
		}
		cout<<sum;
		return 0; 
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				sum=max(sum,a[i]&a[j]);
			}
		}
		cout<<sum;
		return 0;
	}
	if(m==n-1){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j!=i){
					if(x==1){
						sum=a[j];
						x=0;
					}
					else{
						sum&=a[j];
					}
				}
			}
			ans=max(ans,sum);
		}
		cout<<ans;
		return 0;
	}
	dfs(1,0,0);
	cout<<ans;
	return 0;
} 
