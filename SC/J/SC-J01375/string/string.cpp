#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=2e5+7;
ll n,l,r,ans,cur;
struct{
	char ch;
	ll val;
	/**
	 * 打开评测开关！
	 * 打开评测开关！
	 * 打开评测开关！
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 */
}st[MAXN];
signed main(){
	cin.tie(0);
	cout.tie(0);
#define  _TO_JUDGE_On_SEVer 1
#if _TO_JUDGE_On_SEVer
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
#endif
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>st[i].val>>st[i].ch;
	}
	l=1,r=n;
	while(l<r){
		if(st[l].ch!=st[r].ch){
			cur=min(st[l].val,st[r].val);
			ans+=cur;
			if(st[l].val==st[r].val){
				l++;
				r--;
			}
			else if(st[l].val>st[r].val){
				st[l].val-=cur;
				r--;
			}
			else{
				st[r].val-=cur;
				l++;
			}
		}
		else{
			cur=min(st[l].val,st[r].val);
			if(st[l].val==st[r].val){
				l++;
				r--;
			}
			else if(st[l].val>st[r].val){
				st[l].val-=cur;
				r--;
			}
			else{
				st[r].val-=cur;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}