#include <bits/stdc++.h>
using namespace std;
int n,m,a[20000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(m == 1){
		int maxx = 0;
		for(int i = 1;i <= n;i++){
			if(a[i] > maxx){
				maxx = a[i];
			}
		}
		cout<<maxx;
		return 0;
	}
	int maxx = 0;
	for(int i = 1;i <= n;i++){
		for(int j = i+1;j <= n;j++){
			if(a[i]&a[j] > maxx){
				maxx = a[i]&a[j];
			}
		}
	}
	cout<<maxx;
	return 0;
}