#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,tr[N][2],idx,cnt[N],ans,a[31],p,q[N];
void insert(int t){
	int x=0;
	for(int i=p;i>=0;i--){
		int j=(t>>i)&1;
		if(!tr[x][j]) tr[x][j]=++idx;
		x=tr[x][j];
		cnt[x]++;
	}
}
void query(){
	int x=0;
	for(int i=p;i>=0;i--){
		if(tr[x][1]&&cnt[tr[x][1]]>=m){
			ans+=(1<<i);
			x=tr[x][1];
		}
		else if(tr[x][0]) x=tr[x][0];
		else break;
	}	
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>q[i];
		for(int j=31;j>=0;j--){
			int k=(q[i]>>j)&1;
			a[j]+=k;
		}
	}
	for(int j=31;j>=0;j--){
	    if(a[j]>=m){
			p=j;
			break;
		}
	}
	for(int i=1;i<=n;i++) insert(q[i]);
	query();
	cout<<ans;
	return 0;
}
