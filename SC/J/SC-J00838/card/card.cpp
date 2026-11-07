#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],ans[300005],jia[300005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
//	for (int i = 1;i <= m;i++){
//		ans[i]=n;
//	}
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= m;j++) jia[j]=0;
		for (int j = i;j <= n;j++){
			int x=a[j];
			if (jia[x]==0){
				jia[x]=j;
			}
			else{
				for (int k = jia[x];k <= j;k++){
					jia[a[k]]=0;
				}
				jia[x]=j;
			}
		}
		for (int j = 1;j <= m;j++){
//			cout << jia[j] << " ";
			if (jia[j]!=0){
				ans[j]++;
			}
		}
//		cout << '\n';
	}
	for (int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
//10 3
//3 1 2 1 3 2 3 1 2 1

//4 3
//1 2 1 3