#include <bits/stdc++.h>
using namespace std;

long long n, z, m[500005], all_n[500005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> z;
	for(int i = 1;i <= n;i++){
		cin >> m[i];
	}
	
	for(int i = 1;i <= n;i++){
		long long game[500005], gm_cx[z], gm_sx[z];
		for(int j = i;j <= n;j++){
			if(gm_cx[m[j]]==1){
				for(int q = gm_sx[m[j]]+1;q <= j;q++){
					gm_cx[game[q]]==0;
					gm_sx[game[q]]==0;
				}
			}
			else{
				game[j] = m[j];
				gm_cx[m[j]]==1;
				gm_sx[m[j]] == j;
			}
		}
		
		for(int qq=1;qq <= z;qq++){
			if(gm_cx[qq]==1) all_n[qq]++;
		}
		
	}
	for(int i = 1;i <= z;i++){
		cout << all_n[i] << " ";
	}

	
	return 0;
}

