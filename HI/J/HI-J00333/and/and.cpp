#include<bits/stdc++.h>
using namespace std;
int a, b, c[1999999], d[2000000], e = 1;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> a >> b;
	for (int i = 0; i < a; i++){
		cin >> c[i];
	}
	for (int i = 0; i < a; i++){
		e = 1;
		for (int j = 0; j < a; j++){
		 	if (c[i] < c[j]){
		 		e++;
			}
		}
		d[e] = c[i];
	}
	cout << d[b];
	return 0;                                                                                    
}
