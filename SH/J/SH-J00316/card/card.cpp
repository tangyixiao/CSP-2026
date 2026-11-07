#include<bits/stdc++.h>
using namespace std;
int a[10];
int b[10];
int c[10];
int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	int n , m;cin >> n >> m;
	if(n <= 5){
		for(int i = 1;i <= n;i++){
			cin >> a[i];
		}
		for(int i = 1;i <= n;i++){
			int cnt = 0;
			for(int j = i;j <= n;j++){
				b[cnt++] = a[j];
				for(int k = 0;k < cnt - 1;k++){
					if(b[k] == a[j]){
						cnt = 1;
						b[0] = a[j];
					}
				}
			}
			for(int k = 0;k < cnt;k++){
				c[b[k]]++;
//				cout << b[k] << " ";
			}
		}
		for(int i = 1;i <= m;i++) cout << c[i] << " ";
	}
} 
