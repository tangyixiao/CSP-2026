#include<bits/stdc++.h>
#define pii pair<int,int>
#define int long long
#define endl '\n'
using namespace std;
const int maxn=200000+10;
int n;
int cnt[maxn];
char c[maxn];
int l,r;
int minc;
int ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>cnt[i]>>c[i];
	l=1;
	r=n;
	while(l<r){
		minc=min(cnt[l],cnt[r]);
		if(c[l]!=c[r]) ans+=minc;
		cnt[l]-=minc;
		cnt[r]-=minc;
		if(cnt[l]==0) l++;
		if(cnt[r]==0) r--;
	}
	cout<<ans<<endl;
	return 0;
}
//不辨真伪，勿论虚实