#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
//	for(int i = 1;i <= n;i++){
//		cout << a[i];
//	}
	int max=0;
	for(int i = 1;i <= n;i++){
		for(int j = i+1;j <= n;j++){
			if((a[i]&a[j]) > max){
				max = (a[i]&a[j]);
			}
		}
	}
	cout << max;
	return 0;
}
