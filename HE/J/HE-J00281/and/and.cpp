#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+10;
int f(int n){
	int ans = 0;
	while(n){
		n /= 2;
		if(n%2 == 1) ans ++;
	}
	return ans;
}
bool cmp(int x,int y){
	return f(x)>f(y);
}
int n,m,a[N],ans = 0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
	}
	if(n = m){
		a[2] = a[1]&a[2];
		for(int i = 3;i <= n;i ++){
			a[i] &= a[i-2];
		}
		cout << a[n];
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	
	for(int i = 2;i <= m;i ++){
		a[i] &= a[i-1];
	}
	cout << a[m];
	return 0;
}
