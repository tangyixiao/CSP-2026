#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long num[200050];
bool vis[200050];
long long t[50];
long long Pow[50];
long long ans;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (long long i = 1;i <= n;i++){
		cin>>num[i];
	}
	for (long long i = 1;i <= n;i++){
		vis[i] = 1;
	} 
	for (long long i = 40;i >= 0;i--){
		long long cnt = 0;
		for (long long j = 1;j <= n;j++){
			if (!vis[j]){
				continue;
			}
			if ((num[j]>>i)&1){
				cnt++;
			}
		}
		if (cnt >= m){
			t[i] = 1;
			for (long long j = 1;j <= n;j++){
				if (((num[j]>>i)&1) == 0){
					vis[j] = 0;
				}
			}
		}
	}
	Pow[0] = 1;
	for (long long i = 1;i <= 40;i++){
		Pow[i] = Pow[i-1]*2;
	}
	for (long long i = 0;i <= 40;i++){
		ans += Pow[i]*t[i];
	}
	cout<<ans;
	return 0;
}
/*

*/
