#include<bits/stdc++.h>
using namespace std;
int a[200010],n,m;
int ans=0;
int e(int l,int r,int val){
	int ans=l-1;
	while(l<=r){
		int mid=l+r>>1;
		if(a[mid]>=val){
			ans=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	return ans;
}
void dfs(int j,int l,int r){
	if(j<0)return;
	sort(a+l,a+r+1,greater<int>());
	int nl=l,nr=r;
	if(e(l,r,(1<<j))-l+1>=m){
		ans=ans|(1<<j);
		nr=e(l,r,(1<<j));
	}
	for(int i=l;i<=r;i++){
		if(a[i]&(1<<j))a[i]^=(1<<j);
	}
	dfs(j-1,nl,nr);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	dfs(30,0,n-1);
	printf("%d",ans);
	return 0;
}