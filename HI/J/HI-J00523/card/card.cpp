#include <bits/stdc++.h>
using namespace std;

int a[100000], l[100000], c[100000], cn[100000];
bool ap(int n){
	for(int i = 0; i < 100000; i ++){
		if(l[i] == n) return 1;
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i ++)  cin >> a[i];
		for(int x = 0; x < n; x ++){
		for(int i = 0; i < m; i ++){
			if(ap(a[i])){
				for(int j = 0; j < i; j ++){
					c[l[j]] = 0;
					l[j] = 0;
				}
			}
			l[i] = a[i];
			c[l[i]] = 1;
		}
		for(int i = 0; i < m; i ++){
			if(c[l[i]] = 1) cn[a[i]] ++;
		}
	}
	for(int i = 0; i < m; i ++)  cout << c[i] << " ";
	return 0;
}
