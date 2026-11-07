#include <bits/stdc++.h>
using namespace std;

int cnt[300001] = {};

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	int a[500001];
	int v[500001];
	
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	
	for(int i = 0;i < n;i++){
		int pos = 0;
		for(int j = 0;j < n - i;j++){
			v[pos] = a[j];
			pos++;
			for(int k = 0;k < pos-1;j++){
				if(a[j] == v[k]){
					for(int l = k + 1;l < pos;l++){
						v[l] = 0;
						pos--;
					}
					break;
				} 
			}
		}
		for(int j = 1;j <= m;j++){
			for(int k = 0;k < pos;k++){
				if(a[k] == j){
					cnt[j] = cnt[j] + 1;
					break;
				}
			}
		}
	}
	for(int i = 1;i <= m;i++){
		cout << cnt[i] << " ";
    }
	fclose(stdin);
	fclose(stdout);
	return 0;
}
