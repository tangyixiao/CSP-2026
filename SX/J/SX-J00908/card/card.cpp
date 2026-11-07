#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005], b[500005], c[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
//	for(int i=0;i<n;i++){
//		for(int j=i;j<n;j++){
//			if(b[a[j]]!=1)
//				b[a[j]]=1;
//			else{
//				for(int k=i;k<j;k++){
//
//				}
//			}
//		}
//	}
//
	for (int i = 1; i <= n; i++) {
		c[a[i]]++;
	}
	for (int i = 1; i <= n; i++)
		cout << c[i] << " ";
	return 0;
}