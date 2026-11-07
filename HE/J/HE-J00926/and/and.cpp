#include<bits/stdc++.h>
#include <ext/atomicity.h>
#include <bits/localefwd.h>
#include <bits/locale_classes.h>
long long const N = 2e5 + 10;
long long n,m;
int maxn;
int a[N],f[N];

using namespace std;
void choose(int num,int t){
	if(t == 0){
		maxn = max(maxn,num);
		return;
	}
	for(int i = 0;i < n;i++){
		if(f[i] == 0){
			f[i] = 1;
			int sum = num & a[i];
			choose(sum,t - 1);
			f[i] = 0;
		}
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	f[n - 1] = 1;
	choose(a[n -1],m - 1);
	cout << maxn;
	return 0;
}
