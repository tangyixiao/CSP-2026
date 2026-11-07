#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],b[200010],c[200010],maxn=-0x3f;
void dfs(int x,int y){
	if(y==0||x>m)return ;
	else
	{
		if(x<m){
			for(int i=x;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					c[i]=a[i]&a[j];
				}
			}
			dfs(x+1,y-1);
		}
		else{
			for(int i=x;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					maxn=max(maxn,a[i]&a[j]); 
				}
			}
			return ;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		for(int i=1;i<=n;i++){
			c[i]+=a[i];
		}
		dfs(1,m);
	}
	if(m==1){
		for(int i=1;i<=n;i++)
		{
			maxn=max(a[i],maxn);
		}
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int t=a[i]&a[j];
				maxn=max(maxn,t);
			}
		}
	}
	else if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int z=j+1;z<=n;z++){
					int p=a[i]&a[j]&a[z];
					maxn=max(maxn,p);
				}
			}
		}
	}
	else if(m==n){
		maxn=a[1];
		for(int i=2;i<=n;i++){
			maxn=maxn&a[i];
		}
	}
	cout<<maxn;
	return 0;
}