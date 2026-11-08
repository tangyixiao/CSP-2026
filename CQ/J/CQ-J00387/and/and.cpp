#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a[200000],maxa = -1;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(a[i] == a[i-1]){
			maxa = max(maxa,a[i]);
		}
	}
	sort(a+1,a+n+1);
	if(maxa != -1){
		cout<<maxa;
	}
	else{
		cout<<a[n-m+1];
	}
	return 0;
}
