#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int n,m;
int a[500005];
int num[300005];
int t[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		memset(t,0,sizeof(t));
		for(int j = i;j <= n;j++){
			if(!t[a[j]]){
				t[a[j]]=j;
			}else{
				for(int k = 1;k <= m;k++){
					if(t[k]>t[a[j]]){
						t[k]=0;
					}
				}
				t[a[j]]=j;
			}
		}
		for(int j = 1;j <= m;j++){
			if(t[j]){
				num[j]++;
			}
		}
	}
	for(int i = 1;i <= m;i++){
		cout << num[i] << " ";
	}
	return 0;
}