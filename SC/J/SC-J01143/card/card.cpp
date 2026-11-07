#include<bits/stdc++.h>
using namespace std;
const int N=5e5+3;
#define ll long long
ll n,m,k,ans[N],a[N],vis[N],nex[N],p,pos[N],num[N];
pair<ll,ll>sum[N];
vector<pair<int,int>>d[N];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		num[a[i]]++;
		if(vis[a[i]]){
			nex[vis[a[i]]]=i;
		}
		vis[a[i]]=i;
	}
	fill(vis,vis+N,0);
	for(int i=n;i>=1;i--){
		if(vis[a[i]]==0){
			vis[a[i]]=1;
			sum[++p].first=a[i];
			pos[a[i]]=p;
		}
	}
	d[a[n]].push_back({1,1});
	for(int i=n-1;i>=1;i--){
		if(nex[i]==0){
			for(auto j:d[a[i+1]]){
				int lct=pos[a[i]],flag=1;
				if(j.second+1==lct){
					d[a[i]].push_back({j.first,j.second+1});
					flag=0;
				}	
				else{
					d[a[i]].push_back(j);
				}
				if(flag==1){
					d[a[i]].push_back({lct,lct});
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		for(auto j:d[i]){
			int l=j.first,r=j.second;
			sum[l].second+=num[i],sum[r+1].second-=num[i];
		}
	}
	for(int i=1;i<=m;i++){
		sum[i].second+=sum[i-1].second;
	}
	sort(sum+1,sum+1+m);
	for(int i=1;i<=m;i++)cout<<sum[i].second<<" ";
	return 0;
}