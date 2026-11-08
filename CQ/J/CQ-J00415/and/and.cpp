#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=1e8+5;
ll n, m, i, j, ans=1;
ll A[MAXN];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stdout);
	cin>> n>> m;
	for (i=1; i<=n; i++){
		cin>> A[i];
	}
	sort(A+1, A+n+1);
	if (m==1){
		cout<< A[n]<< '/n';
		return 0;
	}
	ans=A[n];
	for (i=1; i<=m-1; i++){
		ans=(ans&A[n-i]);
	}
	cout<< ans<< endl;
	return 0;
}
