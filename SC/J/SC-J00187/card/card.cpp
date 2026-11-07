#include<bits/stdc++.h>
using namespace std;
int a[500005] = {},z[500005] = {},l[300005] = {};
int fin(int c,int x){
	for(int i1 = 1;i1 <= c;i1++){
		if(z[i1] == x){
			return i1;
		}
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	long long n,m,cz;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}

	for(int i = 1;i<= n;i++){
		cz = 0;
		for(int j = i;j <= n;j++){
			int f = fin(cz,a[j]);
			if(f != 0){
				cz = f - 1;
			}
			cz++;
			z[cz] = a[j];
		}
		for(int j = 1;j <= cz;j++){
			l[z[j]]++;
		}
	}

	cout << l[1];
	for(int i = 2;i <= m;i++){
		cout << " " <<l[i];
	}
	return 0;
}