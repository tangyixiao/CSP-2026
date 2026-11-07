#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+50;
int n,m,a[N];
bool f[N],f2[N];
int stc[N],top;
ll ans[N],lst[N];
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
    	cin >> a[i];
	}
//	cout << ans[1] << '\n';
    for(int i=1;i<=n;i++){
    	memset(lst,0,sizeof(lst));
    	memset(f,0,sizeof(f));
    	memset(f2,0,sizeof(f2));
    	for(int j=i;j<=n;j++){
    		if(lst[a[j]]){
    			for(int k=lst[a[j]];k<j;k++){
    				lst[a[k]]=0;
    				f[a[k]]=0;
				}
			}
			lst[a[j]]=j;
			f[a[j]]=1;
		}
		for(int j=i;j<=n;j++){
			if(f[a[j]]&&!f2[a[j]]) ans[a[j]]++,f2[a[j]]=1;
		}
//		cout << ans[1] << ' ' << ans[2] << " " << ans[3] << '\n';
	}
	for(int i=1;i<=m;i++) cout << ans[i] << ' ';
	return 0;
}
