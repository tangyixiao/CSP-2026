#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=500005,M=300005;
ll riest[M];//最右端的点数为i的card坐标 1-range 
ll a[N];
ll open[M];
ll ans[M];
ll n,m;
//坐标1-range 
void fill(ll left,ll right){
	//[left,right]
	for(ll i=left;i<=right;i++){
		if(riest[a[i]]>right||riest[a[i]]==0) continue;
		if(riest[a[i]]==i) ans[a[i]]+=open[a[i]]-left,riest[a[i]]=0;
		else i=riest[a[i]];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i],riest[a[i]]=max(riest[a[i]],i),open[a[i]]=riest[a[i]];
	ll l=n;
	for(ll i=n;i>0;i--){
		if(riest[a[i]]==0){
			riest[a[i]]=i;break;
		}
		if(riest[a[i]]>=riest[a[l]])fill(i,riest[a[i]]-1);
		if(riest[a[i]]>=l&&riest[a[i]]<riest[l]){
			fill(i,riest[a[i]]-1);
			for(ll i=riest[a[i]];i<=n;i++) open[a[i]]=max(open[a[i]],i),riest[a[i]]=a[i];
		}
		if(riest[a[i]]<l) fill(i,riest[a[i]]-1);
	}
	for(ll i=1;i<=n;i++){
		if(riest[a[i]]==i) ans[a[i]]+=open[a[i]];
		//cout<<i<<riest[a[i]]<<endl;
	}
	//for(ll i=1;i<=m;i++) cout<<open[i]<<" "<<riest[i]<<endl;
	for(ll i=1;i<=m;i++) cout<<ans[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
