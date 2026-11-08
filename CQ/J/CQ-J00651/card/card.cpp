#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long num[500050];
long long Max[500050];
long long tot[500050];
long long ans[500050];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (long long i = 1;i <= n;i++){
		cin>>num[i];
	}
	for (long long i = n;i >= 1;i--){
		tot[num[i]]++;
	}
	for (long long i = 1;i <= n;i++){
		ans[i] = 1+Max[num[i]]+(tot[num[i-1]] == 0?ans[i-1]:0);
		Max[num[i]] = ans[i];
		tot[num[i]]--;
	}
	for (long long i = 1;i <= m;i++){
		cout<<Max[i]<<' ';
	}
	return 0;
}
/*
3 1 2 1 3 2 3 1 2 1
1 1 1 2 2 2 3 6 3 10
*/
