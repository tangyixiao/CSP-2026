#include<bits/stdc++.h>
using namespace std;
int n, m, a[200010], maxa=0, ans[200010];
bool cmp(int a, int b){
	return a>b;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n, cmp);
	for(int i=0; i<n-m; i++){
		int k=a[i];
		for(int j=i+1; j<m; j++){
			k=k&a[j];
		}
		maxa=max(maxa, k);
	}
	int k=a[0];
	for(int i=1; i<m; i++){
		k=k&a[i];
	}
	cout<<max(maxa, k);
	return 0;
}
