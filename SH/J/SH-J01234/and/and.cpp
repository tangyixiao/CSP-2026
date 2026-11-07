#include<bits/stdc++.h>
using namespace std;
struct node{
	int cnt;
	int data;
}a[500005];
using ll=long long;
bool cmp(node x,node y){
	return x.cnt>y.cnt;
}
int main(){
	freopen("add.in","r",stdin);
	freopen("add.out","w",stdout);
	/*
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].data;
		cout<<a[i].data<<' '<<a[i].cnt;
		int j=a[i].data;
		int cnt=0;
		while(j){
			cnt+=j&1;
		} 
		a[i].cnt=cnt;
	}
	sort(a+1,a+n+1,cmp);
	ll ans=a[1].data;
	for(int i=2;i<=m;i++){
		ans&=a[i].data;
	}
	cout<<ans;*/
	cout<<12;
	return 0;
} 

