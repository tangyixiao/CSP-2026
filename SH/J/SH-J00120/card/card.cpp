#include<bits/stdc++.h>
using namespace std;
int a[500005];
int f[500005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		int game[50005];
		bool use[30005];
		int id[50005];
		memset(game,0,sizeof(game));
		memset(use,0,sizeof(use));
		int idx = 0;
		for(int j = i; j <= n; j++){
			if(use[a[j]] == 0){
				idx++;
				id[a[j]] == idx;
				game[idx] = a[j];
				use[a[j]] = 1;
			}else{
				for(int k = id[a[j]]; k <= idx; k++){
					game[k] = game[k+2];
					id[game[k]] -= 2;
				}
				idx -= 2;
				idx++;
				game[idx] = a[j];
			}
		}
		for(int j = 1; j <= idx; j++){
			f[game[j]]++;
		}
		for(int j = 1; j <= idx; j++){
			cout << game[j] << " ";
		}
		cout << endl;
	}
	for(int i = 1; i <= m; i++){
		cout << f[i] << " ";
	}
	return 0;
}

