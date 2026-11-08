#include<bits/stdc++.h>
#define int lint
using namespace std;
using lint=long long;
using llint=__int128;
using ldouble=long double;
const int MAX_N=2e5+10,INF=1e9;
struct node{
	int cnt;
	char ch;
};
node a[MAX_N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].cnt>>a[i].ch;
	int l=1,r=n,l_cnt=a[1].cnt,r_cnt=a[n].cnt,ans=0;
	l_cnt-=min(a[1].cnt,a[n].cnt),r_cnt-=min(a[1].cnt,a[n].cnt);
	if(a[1].ch!=a[n].ch) ans+=min(a[1].cnt,a[n].cnt);
	while(l<r){
		if(l_cnt>0){
			r--;
			if(a[r].cnt>l_cnt){
				if(a[r].ch!=a[l].ch) ans+=l_cnt;
				r_cnt=a[r].cnt-l_cnt;
				l_cnt=0;
			}
			else{
				if(a[r].ch!=a[l].ch) ans+=a[r].cnt;
				l_cnt-=a[r].cnt;
				r_cnt=0;
			}
		}
		else if(r_cnt>0){
			l++;
			if(a[l].cnt>r_cnt){
				if(a[l].ch!=a[r].ch) ans+=r_cnt;
				l_cnt=a[l].cnt-r_cnt;
				r_cnt=0;
			}
			else{
				if(a[l].ch!=a[r].ch) ans+=a[l].cnt;
				r_cnt-=a[l].cnt;
				l_cnt=0;
			}
		}
		else{
			l++,r--;
			if(l>=r){
				cout<<ans;
				return 0;
			}
			l_cnt=a[l].cnt,r_cnt=a[r].cnt;
			l_cnt-=min(a[l].cnt,a[r].cnt),r_cnt-=min(a[l].cnt,a[r].cnt);
			if(a[l].ch!=a[r].ch) ans+=min(a[l].cnt,a[r].cnt);
		}
	}
	cout<<ans;
	return 0;
}

