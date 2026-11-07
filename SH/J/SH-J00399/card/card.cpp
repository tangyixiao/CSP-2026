#include<bits/stdc++.h>
using namespace std;
const int N=5e5+1;
int n,m;
int a[N];
long long sum[N];
int pre[N],nex[N];
int mp[N],mpo[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],mp[a[i]]=i;
	for(int i=n-1;i>=1;i--){
		pre[i]=pre[i+1],nex[i]=nex[i+1];
		if(mp[a[i]]!=i) pre[i]=i,nex[i]=mp[a[i]];
	}
	for(int i=1;i<=n;i++){
		sum[i]+=1;
		if(pre[i]!=0) sum[nex[i]]+=sum[i];
	}
	for(int i=1;i<=n;i++){
		if(i!=pre[i]) sum[i]+=sum[i-1],mpo[a[i]]+=sum[i];
		else sum[i]=0;
	}
	for(int i=1;i<=m;i++) cout<<mpo[i]<<" ";
	return 0;
}
