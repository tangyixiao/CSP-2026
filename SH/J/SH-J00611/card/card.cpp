#include <bits/stdc++.h>
using namespace std;
int n,m,a,cnt[5005][3005],ans[3005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a;
		for(int j = 1;j <= i;j++){
			if(cnt[j][a]){
				memset(cnt[j],0,sizeof(cnt[j]));
				cnt[j][a]=1;
			}else{
				cnt[j][a]=1;
			}
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			ans[j] += cnt[i][j];
			//cout << cnt[i][j] << ' ';
		}
		//cout << endl;
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << ' ';
	}
}
