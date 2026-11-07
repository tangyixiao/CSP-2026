#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
bool cmp(int a,int b){
	return a > b;
}
int n,m;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1,a + 1 + n,cmp);
	int ans = 1;
	for(int i = 1;i <= m;i++){
		ans = ans & a[i];
	}
	cout << ans;
	return 0;
}
