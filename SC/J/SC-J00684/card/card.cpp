#include<bits/stdc++.h>
using namespace std;
int n,a[500010],pd[500010],now=1,ans[500010],m;
void del(int l,int r){
	for(int i=l;i<=r;i++){
		pd[i]=pd[r+i-l+1];
	}
	for(int i=r;i<=now;i++){
		pd[i]=0;
	}
	now=r;
}
void slove(int k){
	for(int i=1;i<=n;i++){
		pd[i]=0;
	}
	for(int i=k;i<=n;i++){
		pd[++now]=a[i];
		int l=1,r=n;
		while(l<=r){
			int mid=(l+r)>>1;
			if(pd[mid]>=a[i]) r=mid-1;
			else l=mid+1;
		}
		if(pd[l]==a[i]){
			del(l,i-1);
		}
	}
	if(pd[now]==k%m) ans[k%m]++;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		slove(i);
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}