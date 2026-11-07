#include<bits/stdc++.h>//ÀÏÌì±£ÓÓ£¡ 
using namespace std;
int n,a[200005],b[200005],m,ans;
long long cnt;
void cydj(int jt,int qs,int ans,int cnt){
	for(int i=1;i<=n;i++){
		if(a[i]==cnt){
			ans=max(ans,a[i]);
			return;
		}
	}
	if(cnt>=b[n]){
		cout<<ans;
		return;
	}
	cnt+=(1<<jt);
	cnt-=(1<<qs);
	cydj(jt+1,qs+1,ans,cnt);
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	if(m==1){
		cout<<b[n];
		return 0;
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i){
					continue;
				}
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=0;i<=m-1;i++){
		 cnt+=(1<<i);
	}
	cydj(m-1,0,0,cnt);
	return 0;
}
