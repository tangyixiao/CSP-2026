#include <bits/stdc++.h>
using namespace std;
int n , m , arr[500005] , arr2[300005] , desk[500005];
void play(int i) {
	for (int j = i;j <= n;++j) {
		bool flag = 1 , flag2 = 1;
		int pos = 1;
		for (int k = 1;;++k) {
			if (desk[k] == 0) {
				if (flag2) {
					pos = k;
				}
				break;
			}
//			if (desk[k] == j || !flag) {
//				flag = 0;
//				desk[k] = 0;
//				pos = k;
//			}
			if (flag == 0) {
				desk[k] = 0;
			}
			if (desk[k] == arr[j] ) {
				if (flag) {
					pos = k;
					flag2 = 0;
				}
				flag = 0;
				desk[k] = 0;
			}
		}
		desk[pos] = arr[j];
	}
	
	for (int j = 1;;++j) {
		if (desk[j] == 0) {
			break;
		}
		arr2[desk[j]] ++;
	}
}
int main () {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;++i) {
		cin >> arr[i];
	}
	for (int i = 1;i <= n;++i) {
		memset(desk,0,sizeof(desk));
		play(i);
	}
	for (int i = 1;i <= m;++i) {
		cout << arr2[i] << " ";
	}
	return 0;
}
