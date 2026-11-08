#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0;
int a[200005];
bool v[200005]={false},vis[200005]={false};
int cnt[32]={0};
void f(int id,int y){
	int x=a[id];
	x=x>>(y-1);
	if(x&1==1){
		cnt[y]++;
		vis[id]=false;
	}
	else{
		vis[id]=true;
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
//	bool vv=true;
	for(int i=30;i>=1;i--){
		for(int j=0;j<=30;j++){
			cnt[j]=0;
		}
//		if(vv)
		for(int j=1;j<=n;j++){
			if(!v[j]){
				f(j,i);
			}
		}
		if(cnt[i]>=m){
			for(int j=1;j<=n;j++){
				if(!v[j]){
					v[j]=vis[j];
				}
			}
			ans+=(1<<(i-1));
		}
	}
	cout<<ans;
	return 0;
}
