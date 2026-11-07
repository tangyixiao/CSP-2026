#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

const int N=500005, M=300005;
int n, m, a[N], cnt[M], pos[N];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++)
		cin >> a[i];
		
	for(int i=1; i<=n; i++){
		vector<int> tab;
		memset(pos, 0, sizeof(pos));
		for(int j=i; j<=n; j++){
			if(pos[a[j]]){					// 有相同点数的卡牌在桌上
				for(int k=pos[a[j]]; k<j; k++)
					tab.pop_back();
			}
			tab.push_back(a[j]);
			pos[a[j]] = j;
		}
		int len=tab.size();
		for(int j=0; j<len; j++)
			cnt[tab[j]]++;
	}
	
	for(int i=1; i<=m; i++)
		cout << cnt[i] << " ";
	
	return 0;
}

