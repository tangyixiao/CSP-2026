#include<bits/stdc++.h>
using namespace std;
const int N=5e5+9;
int n,m,a[N],cnt[N],ans[N],p[N],nxt[N],prv[N];
vector<int> pvs[N];
//vector<int> card[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
//	for(int i=1;i<=m;i++){
//		card[i].push_back(0);
//	}
	for(int i=1;i<=n;i++){
		nxt[i]=i;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		prv[i]=p[a[i]];
		nxt[prv[i]]=i;
		//2456235631
		p[a[i]]=i;
//		card[a[i]].push_back(i);
	} 
	nxt[n+1]=n+1;
	for(int i=n;i>=1;i--){
		nxt[i]=nxt[nxt[i]];
		if(nxt[i]!=i){
			pvs[nxt[i]].push_back(i);
		}
	}
	for(int i=1;i<=n;i++){
		if(nxt[i]==i){
			pvs[i+1].push_back(i);
		}
	}
	for(int i=1;i<=n;i++){
		cnt[i]=1;
		for(int j=0;j<pvs[i].size();j++){
			cnt[i]+=cnt[pvs[i][j]];
		}
	}
	for(int i=1;i<=n;i++){
		if(nxt[i]==i){
			ans[a[i]]+=cnt[i];
		}
	}
//	for(int i=1;i<=m;i++){
//		int ans=0;
//		for(int j=card[i].size()-2;j>=0;j-=2){
//			ans+=card[i][j+1]-card[i][j];
//		}
//		cout<<ans<<" ";
//	}
for(int i=1;i<=m;i++){
	cout<<ans[i]<<" ";
}
	cout<<endl;
	return 0;
}
