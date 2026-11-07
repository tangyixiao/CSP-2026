#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[5010];
int num[3010];
bool dhave[5010];
bool have[3010];
int cnt[3010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n >>m;
	for(int i = 1;i <= n;i ++) {
		cin >>a[i];
	}
	for(int i = 1;i <= n;i ++) {
		memset(num,-1,sizeof(num));
		memset(dhave,false,sizeof(dhave));
		memset(have,false,sizeof(have));
		for(int j = i;j <= n;j ++) {
			if(num[a[j]] == -1 || dhave[num[a[j]]] == true) {
				num[a[j]] = j;
			}else {
				for(int k = num[a[j]];k <= j - 1;k ++) {
					dhave[k] = true;
				}
				num[a[j]] = j;
			}
		}
		for(int j = i;j <= n;j ++) {
			//cout <<dhave[j] <<' ';
			if(dhave[j] == false) {
				have[a[j]] = true;
			}
		}
		//cout <<endl;
		for(int j = 1;j <= m;j ++) {
			if(have[j] == true)cnt[j] ++;
		}
	}
	for(int i = 1;i <= m;i ++) {
		cout <<cnt[i] <<' ';
	}
	return 0;
}
