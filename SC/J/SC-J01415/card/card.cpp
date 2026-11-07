#include <bits/stdc++.h>
using namespace std;
//#define ll long long
int m,n,a[500010],cnt[300010];//cnt[i]表示第i出现次数 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> m >> n;
	for (int i = 1;i <= n ; i++) cin >> a[i];
	for (int i = 1;i <= m;i++){
		//a[i-1]开始
		int now = a[i-1]
		for (int j = i;j <= n;j++){
			if(a[j] == now)
		}
	}
	return 0;
} 