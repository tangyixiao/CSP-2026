#include<bits/stdc++.h>
using namespace std;

int n, m;
int card[500010], ans[300010];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> card[i];
	}
	int nn = n;
	while(nn--){
		int pos[300010] = {0};   //出现下标 
		for(int j=n-nn; j<=n; j++){
			if(pos[card[j]]){
				for(int k=1; k<=m; k++){
					if(pos[k] > pos[card[j]])	  pos[k] = 0;
				}
			}
			pos[card[j]] = j;
		}
		for(int j=1; j<=m; j++){
			if(pos[j])		ans[j]++;
		}
	}
	for(int i=1; i<=m; i++){
		cout << ans[i] << " ";
	}
	//石山代码 
	
	return 0;
}
