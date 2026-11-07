#include<bits/stdc++.h>
#define MAXN 100010
#define il inline
#define re register
#define ll long long
using namespace std;
ll n,m,ans,cnt,cnt2,a[MAXN],vis[MAXN];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;

	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a+0,a+n,cmp);
	ans=a[0];
	for(int i=1;i<m;i++){
		ans&=a[i];
	}
	cout<<ans;
}