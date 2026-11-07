#include<bits/stdc++.h>
using namespace std;
int a[3000000];
int c[50000][3005];
int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}

	for(int i = 1; i <= n; i ++){//局数 
		for(int j = i; j <= n;  j++){//牌数 
			for(int k = 1; k <= j; k ++){ 
				if(c[k][i] == a[j]){
					for(int l = k; l <= j-1 ; l++){
						c[l][i] = 0;
					}
				}
			}
			c[j][i] = a[j];
		}
	}
	for(int i = 1; i <= m; i ++){
		int sum = 0;
		for(int j = 1; j<=n; j ++){//局数 
			for(int k = 1; k <= n;k++){//牌 
				if(c[k][j] == i){
					sum++;
				}
			}
		}

			cout << sum << " ";
		
	}
}
