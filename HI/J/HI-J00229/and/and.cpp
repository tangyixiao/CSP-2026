#include<bits/stdc++.h>
using namespace std;

int n,m,a[200005],b[200005],ans,l;
map<int,int>mp;
void vv(int id,int cnt){
	if(id<=ans){
		return;
	}
	if(cnt==m){
		ans=max(ans,id);
		return;
	}
	for(int i=1;i<=n;i++){
		if(b[i]!=1){
			b[i]=1;
			vv((id & a[i]),cnt+mp[a[i]]);
			b[i]=0;
		}
		
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mp[a[i]]++;
		if(a[l]<a[i])l=i;
	}
	b[l]=1;
	vv(a[l],mp[a[l]]);
	for(int i=1;i<=n;i++){
		b[i]=1;
		vv(a[i],mp[a[i]]);
		b[i]=0;
	}
	cout<<ans;
}
