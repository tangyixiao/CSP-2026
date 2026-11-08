#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
long long n,k,a[1000000];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> k;
	for(long long i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	long long ans=a[0];
	for(long long i = 0;i < k;i++){
		ans=ans&a[i];
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

