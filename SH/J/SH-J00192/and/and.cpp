#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
ll n,m,a[200009],ans;
bool cmp(int p,int q){
	if(p>q) return 1;
	else return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	ans=a[1];
	for(ll i=1;i<=m;i++) ans=(ans&a[i]);
	cout<<ans<<endl;
	return 0;
}
