#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[500005],tr[500005],ans[500005],s[500005],sr[500005],biao[500005],last[500005];
void change(int x,int l,int r,int m,int z){
	if(l==r){
		tr[x]=z;
		return;
	}
	int mid=(l+r)/2;
	if(m<=mid) change(x*2,l,mid,m,z);
	if(m>mid) change(x*2+1,mid+1,r,m,z);
	tr[x]=max(tr[x*2],tr[x*2+1]);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=sr[a[i]];
		sr[a[i]]=i;
	}
	memset(last,0x3f,sizeof(last));
	for(int i=n;i>=1;i--){
		change(1,1,m,a[i],0);
		int h=tr[1];
		if(last[a[i]]>i){
			ans[a[i]]+=i-h;
			last[a[i]]=h;
		}
		change(1,1,m,a[i],s[i]);
		biao[s[i]]=1;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}
/*
*/
