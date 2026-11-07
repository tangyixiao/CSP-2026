#include <bits/stdc++.h>
#include <cstring>
using namespace std;

const int MAXN = 500005;
int sx[MAXN];
int fi[MAXN];


int main(){
	freopen("card.in","w",stdin);
	freopen("card.out","r",stdout);
	int m = 0,n =0;
	cin >> m >> n;
	for(int i = 0;i < n;i++){
		cin >> sx[i];
	}
	int a = sx[m-1];
	fi[a] = m;
	for(int x = 1;x <= n;x ++){
		for(int y = 0;y < m-1;y ++){
			if(sx[y] == x){
				fi[x] += 1;
			}
		}
	}
	for(int j = 1;j <= n;j ++){
		cout << fi[j] << ' ';
	}
}