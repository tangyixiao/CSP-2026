#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
struct pone{int num;char c;}p[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++) cin>>p[i].num>>p[i].c;
	int l=1,r=n;
	while (l<r){
		int dele=min(p[l].num,p[r].num);
		if (p[l].c!=p[r].c) ans+=dele;
		p[l].num-=dele,p[r].num-=dele;
		if (p[l].num==0) l++;
		if (p[r].num==0) r--;
	}
	cout<<ans<<endl;
	return 0;
}
