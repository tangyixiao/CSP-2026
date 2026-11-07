#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
int n,m,a[N],lt[N],tree[N];
ll ans[N];

int lowbit(int x){
	return x&(-x);
}

void add(int k,int x){
	while(k<=n){
		tree[k]+=x;
		k+=lowbit(k);
	}
}

ll query(int k){
	ll sum=0;
	while(k){
		sum+=tree[k];
		k-=lowbit(k);
	}
	return sum;
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		lt[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		ll q=query(i-1);
		add(i,i-q),add(lt[a[i]],-i+q);
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]+=i-query(i);
	}
	for(int i=1;i<m;i++)cout<<ans[i]<<' ';
	cout<<ans[m];
	return 0;
}
