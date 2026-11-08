#include<bits/stdc++.h>
using namespace std;
int a[500005],d[300005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		c[i] = 0;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			d[j]=a[j];
		}
		for(int j = i; j <= n; j++){
			for(int k = j; k >= i; k--){
				if(d[k] == d[j]){
					for(int q = k; q <= j; q++){
						d[q] = 0;
					}
				}
			}
		}
		for(int j = i; j <= n; j++){
			if(!d[j]){
				c[d[j]]+=1;
			}
		}
	}
	
	for(int i = 1; i <= m; i++){
		cout << c[i] << ' ';
	}
	return 0;
}
