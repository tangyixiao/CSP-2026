#include <bits/stdc++.h>

using namespace std;

const int N = 5e5+10;
int a[N];
int b[15];
int c[15];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	
	for (int i = 1;i <= n;i++){
		for (int j = i;j <= n;j++){
			if (b[i] == 1){
				for (int k = 1;k <= 9;k++){
					b[i]= 0;
				}
				b[i]++;
			}else{
				b[i]++;
			}
		}
		for (int i = 1;i <= 9;i++){
			c[i] += b[i];
		}
	}
	
	for (int i = 1;i <= m;i++){
		cout << c[i] << ' ';
	}
	
	return 0;
}
