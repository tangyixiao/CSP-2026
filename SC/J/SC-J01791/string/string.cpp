#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=3e5;
int n,a[maxn],ans=0;
char ch[maxn];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>ch[i];
	int l=1,r=n;
	while(l<r){
		if(ch[l]==ch[r]){
			if(a[l]>a[r]){
				a[l]-=min(a[l],a[r]);
				r--;
				continue;
			}
			else if(a[l]<a[r]){
				a[r]-=min(a[l],a[r]);
				l++;
				continue;
			}
			else if(a[l]==a[r]){
				l++,r--;
				continue;
			}
		}
		else if(ch[l]!=ch[r]){
			if(a[l]>a[r]){
				ans+=min(a[l],a[r]);
				a[l]-=min(a[l],a[r]);
				r--;
				continue;
			}
			else if(a[l]<a[r]){
				ans+=min(a[l],a[r]);
				a[r]-=min(a[l],a[r]);
				l++;
				continue;
			}
			else if(a[l]==a[r]){
				ans+=min(a[l],a[r]);
				l++,r--;
				continue;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}