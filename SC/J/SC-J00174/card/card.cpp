#include<bits/stdc++.h>
using namespace std;
const int N=505;
int a[N],q[N],mp[N],sum[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int r=0;
	for(int l=1;l<=n;l++){
		r=0;
		memset(mp,0,sizeof(mp));
//		cout<<l<<":\n";
		for(int i=l;i<=n;i++){
			if(mp[a[i]]!=0){
				int tr=r;
				r=mp[a[i]]-1;
				for(int j=mp[a[i]];j<=tr;j++) mp[a[q[j]]]=0;
			}
//			cout<<"*"<<r<<"\n";
			r++;
			q[r]=i,mp[a[i]]=r;
//			for(int j=1;j<=r;j++) cout<<a[q[j]]<<" ";
//			cout<<"\n";
		}
		memset(mp,0,sizeof(mp));
		for(int i=1;i<=r;i++) mp[a[q[i]]]++;
		for(int i=1;i<=m;i++) if(mp[i]) sum[i]++;
	}
	for(int i=1;i<=m;i++) cout<<sum[i]<<" ";
	return 0;
}