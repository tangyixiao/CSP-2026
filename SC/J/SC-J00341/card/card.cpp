#include <iostream>
using namespace std;
const int maxn = 3e5 + 10;
int n, m;
int a[maxn], b[maxn];
int mn[maxn];
bool pan(int x, int n){
	for (int i = 1;i <= n;++ i){
		if (mn[i] == x){
			return true;
		}
	}
	return false;
}
bool zhao(int x, int n){
	for (int i = 1;i <= n;++ i){
		if (mn[i] == x){
			return (i - 1);
		}
	}
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0;i < n;++ i){
		cin >> a[i];
	}
	for (int i = 0;i < n;++ i){
		int index = 0;
		for (int j = i;j < n;++ j){
			if (pan(a[j], index)){
				int xx = zhao(a[j], index);
				index = xx + 1;
				//mn[index] = a[j];
			}else {
				mn[++index] = a[j];
			}
		}
		for (int j = 1;j <= index;++ j){
			b[mn[j]] ++;
			//cout << "\n=====" << mn[j] << "=====\n";
		}
	}
	for (int i = 1;i <= m;++ i){
		printf("%d ", b[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}