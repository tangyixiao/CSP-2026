#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=1e5+5;
ll n, m, i, j, ans, cnt, cnt2;
ll A[MAXN];
ll B[MAXN];
queue <int> C;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>> n>> m;
	for (i=1; i<=n; i++){
		cin>> A[i];
	}
	cnt2=n+1;
	for (i=1; i<n; i++){
		for (j=1; j<=(n-i); j++){
			A[cnt2]=A[cnt2-n+i];
			cnt2++;
		}
	}
	for (i=1; i<=cnt2; i++){
		ans++;
		ans-=B[A[i]];
		C.push(A[i]);
		for (j=1; j<=B[A[i]]; j++){
			C.pop();
		}
		B[A[i]]=i;
	}
	for (i=1; i<=ans; i++){
		cnt=C.front();
		C.pop();
		cout<< cnt<< " ";
	}	
	return 0;
}
