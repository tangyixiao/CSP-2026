#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define endl '\n'
#define pii pair<int,int>
const int M=2e5+5;
int n,m;
struct node{
	int id;
	ll a,cnt;
}ds[M];
ll vis(ll x){
	ll num=0;
	while(x>0){
		if(x&1) num++;
		x>>=1;
	}
	return num;
}
bool cmp(node x,node y){
	if(x.cnt==y.cnt) return x.a>=y.a;
	else return x.cnt>=y.cnt;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>ds[i].a;
		ds[i].id=i;
		ds[i].cnt=vis(ds[i].a);
	}
	sort(ds+1,ds+1+n,cmp);
	ll ans=ds[1].a;
	for(int i=2;i<=m;i++) ans=ans&ds[i].a;
	cout<<ans;
	return 0;
}
//RP++ 想npy 
//10-31 10:22:36