#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[514514],last[514514],cnt[514514];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i = 1;i <= n;i++){
		cin>>a[i];
		last[a[i]] = i;
		cnt[a[i]]++;
	}
	for(ll i = 1;i <= n;i++) if(last[a[i]] == i) cnt[a[i+1]]+=cnt[a[i]];
	for(ll i = 1;i <= m;i++) cout<<cnt[i]<<' ';
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
