#include<bits/stdc++.h>
#define int long long
using namespace std;
struct st{
	int id,wz;
}flag[300005],ans[300005];
int n,m,a[500005],t[300005];
vector<int>v[300005];
bool cmp(st o,st p){
	return o.wz<p.wz;
}
bool check(int x,int q,int cz){
	int l=0,r=v[q].size()-1;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(v[q][mid]>=x){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	int p=v[q].size()-1-r;
	if(p<cz){
		return 1;
	}
	return 0;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]++;
		v[a[i]].push_back(i);
	}
	for(int i=1;i<=m;i++){
		flag[i].id=i;
		flag[i].wz=v[i][v[i].size()-1];
	}
	sort(flag+1,flag+m+1,cmp);
	int cnt=n;
	ans[m].id=n;
	ans[m].wz=flag[m].id;
//	for(int i=1;i<=m;i++){
//		cout<<flag[i].id<<" "<<flag[i].wz<<"\n";
//	}
	for(int i=m-1;i>=1;i--){
		ans[i].wz=flag[i].id;
		cnt-=t[flag[i+1].id];
//		cout<<t[flag[i].id]<<" ";
		if(check(flag[i-1].wz,i,flag[i].wz-flag[i-1].wz-1)==1||i==1){
			ans[i].id=t[flag[i].id];
		}else{
			ans[i].id=cnt;
		}
//		cout<<ans[i].id<<"\n";
	}
	sort(ans+1,ans+m+1,cmp);
	for(int i=1;i<=m;i++){
		cout<<ans[i].id<<" ";
	}
	return 0;
}
