#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	freopen("card.in","r",stdin);
	freopen("card.out","e",stdout);
	cin >> n >> m;
	int a[n+100],b[n+100],c[m+100];
	for(int i = 0;i < n;i++){
		cin >> a[i];
		c[i] = 0;
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			b[i] = a[i];
		}
		for(int j = 0;j < n;j++){
			if(j < i){
				b[j] = 0;
			}
			if(b[j] == b[i]){
				for(int k = i;k < j;k++){
					b[k] = 0;
				}
			}
		}
		cout << endl; 
		for(int j = 0;j < n;j++){
			c[b[j]]++;
		}
	}
	for(int i = 0;i < n;i++){
		cout << c[i] << ' ';
	}
	return 0;
}
