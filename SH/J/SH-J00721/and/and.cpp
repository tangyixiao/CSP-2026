#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,m,a[N],ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int i=30;i>=0;i--){
		vector<int> b;
		for (int j=1;j<=n;j++){
			if ((a[j]>>i)&1){
				b.push_back(a[j]);
			}
		}
		if (b.size()<m) continue;
		ans+=(1ll<<i);
		for (int j=1;j<=b.size();j++) a[j]=b[j-1];
		n=b.size();
	}
	cout << ans;
	return 0;
}
/*
9:06 开T3
9:08 *考虑从高位到低位贪心
从至少>=m个二进制下该位为 1 的数开始 
优先保留 1 位多的 
*如果该位 1 的数量不足 m 则全部保留 
9:13 思路应该可行？开写代码，希望不要写挂qwq
9:20 通过下发样例 心态++ 如果不挂分有 300pts 应该是稳1=了 
*/
