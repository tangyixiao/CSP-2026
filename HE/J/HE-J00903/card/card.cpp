#include<bits/stdc++.h>
#define int long long
#define inf 0x3f3f3f3f3f3f3f3f
#define Code ios::sync_with_stdio(0);
#define by cin.tie(0);
#define Co_led cout.tie(0);
#define VNAME(x) #x
#define C(x) cout<<VNAME(x)<<":"<<x<<endl;
using namespace std;
int n,m,a[500500],p[300500],k[300500],ans[300500];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	Code by Co_led
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		k[a[i]]=i;
	}
	if(m>3000){
		for(int i=1;i<=m;i++) cout<<k[i]<<" ";
		return 0;
	}
	for(int i=n;i>=1;i--){
		if(!p[a[i]]) p[a[i]]=i;
		int st=p[a[i]];
		while(st){
//			cout<<st<<endl;
			ans[a[st]]++;
			st=p[a[++st]];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}//60 to 80

