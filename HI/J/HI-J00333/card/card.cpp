#include<bits/stdc++.h>
using namespace std;
int a, b, c[500001], d[500000], e = 0;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> a >> b;
	int x[b];
	for (int i = 0; i < a; i++){
		cin >> c[i];
		d[i] = c[i];
	}
	int f[b];
	for (int i = 0; i < a; i++){
		for (int j = i; j < a; j++){
		 	for (int l = i; l < j; l++){
		 		if (d[l] = d[j]){
		 			while (l < j){
		 				d[l] = 0;
		 				l++;
					}                                                                                                ------	
				}
			}
			for (int o = 1; o <= b; o++){
				for (int p = 0; p < a; p++){
					if (d[p] = o){
						f[o-1]++;
					}
				}
			}
			for (int h = 0; h < a; h++){
				d[h] = c[h];
			}
		}
	}
	for (int i = 0; i < b; i++){
		cout << f[i] << " ";
	}
	return 0;
}
