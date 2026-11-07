//Pre: 25 (@1, 2, 3, 13, 14)
#include <iostream>
using namespace std;
int a[200010], n, m, tot1, tot2;
//int a[200010], n, m, p[200010], tot[100010];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
//	for(int i = 1; i <= n; i++){
//		for(int j = 1; j <= 200000; j++) p[j] = -1;
//		int cur = i;
//		for(int j = i; j <= n; i++){
//			int flag = -1;
//			for(int k = i; k <= j; k++){
//				if(p[k] == a[j]){
//					flag = k;
//					break;
//				}
//			}
//			if(flag == -1){
//				p[cur++] = a[j];
//			}else{
//				for(int k = flag + 1; k <= j + 1; k++) p[k] = -1;
//			}
//			cur = flag + 1;
//		}
//		for(int j = i; j <= n; i++){
//			if(p[j] == -1) break;
//			tot[p[j]]++;
//		}
//	}
//	for(int i = 1; i <= m; i++){
//		cout << tot[i] << ' ';
//	}
	for(int i = 1; i <= n; i++){
		int cr1 = a[i], cr2 = a[n];
		if(cr1 != cr2){
			tot1++, tot2++;
		}else{
			if(cr1 == 1) tot1++;
			else tot2++;
		}
	}
	cout << tot1 << ' ' << tot2;
	return 0;
}
