#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,zcnt,ans;
struct node{
	int l,r;
	char c;
}a[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		int cnt;
		cin>>cnt>>a[i].c;
		a[i].l=zcnt+1;
		a[i].r=a[i].l+cnt-1;
		zcnt+=cnt;
	}
	int j=n;
	for(int i=1;i<=n;i++){
		if(a[i].l>zcnt/2)break;
		int duir=(zcnt-a[i].l+1),duil=(zcnt-a[i].r)+1;
		for(;j>=i;j--){
			if(a[j].l<=duil&&duir<=a[j].r){
				if(a[j].c!=a[i].c)ans+=duir-duil+1;
				break;
			}
			if(duil<=a[j].l&&a[j].r<=duir){
				if(a[j].c!=a[i].c)ans+=(a[j].r-a[j].l+1);
				continue;
			}
			if(a[j].l<=duil){
				if(a[j].c!=a[i].c)ans+=a[j].r-duil+1;
				break;
			}
			if(a[j].r>=duir){
				if(a[j].c!=a[i].c)ans+=duir-a[j].l+1;
			}
		}
	}
	cout<<ans;
	return 0;
}
