#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5+10;
int n,m,a[N],ans[N],s[N];
bool f[N];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(n <= 500 && m <= 200){
		for(int i = 1;i <= n;i++){
			memset(s,0,sizeof(s));
			memset(f,0,sizeof(f));
			for(int j = i;j <= n;j++){
				if(s[a[j]]){
					for(int k = s[a[j]];k < j;k++){
						f[k] = true;
					}
				}else{
					s[a[j]] = j;
				}
			}
			for(int j = i;j <= m;j++){
				if(!f[j]) ans[a[j]]++;
			}
		}
		ans[a[n]] = n;
		for(int i = 1;i <= m;i++){
			cout << ans[i] << " ";
		}
		return 0;
	}
	for(int i = 1;i <= n;i++){
		ans[a[i]] = i;
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
