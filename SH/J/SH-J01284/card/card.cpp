#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[500005],cnt,ans[500005];
vector<int> v; 

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		v.clear();
		for(int j=i;j<=n;j++){
			int cnt=0;
			for(int k=0;k<v.size();k++)
				if(v[k]==a[j]){
					cnt=v.size()-k;
					break;
				}
			if(cnt) while(cnt--) v.pop_back();
			v.push_back(a[j]);
		}
		for(int k:v) ans[k]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
