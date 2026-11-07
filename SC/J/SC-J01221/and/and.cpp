#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[2000001],b,c,d[20000001],e;
signed main(){
	freopen("and5.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(b < a[i]){
			b = a[i];
		}
	}
	d[0] = b;
	for(int i = 1;i < m;i++){
		b = 0;
		for(int j = 0;j < n;j++){
			if(b < a[j] && a[j] < d[i - 1]){
				b = a[j];
			}
		}
		d[i] = b;
	}
	e = d[0] & d[1];
	for(int i = 1;i < m - 1;i++){
		e = e & d[i + 1];
	}
	cout << e;
	return 0;
}