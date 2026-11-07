#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],t[300005],cnt[300005];
int l[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++){
		if(t[a[i]] == 0) t[a[i]] = i;
		else {
			b[t[a[i]]] = i;
			t[a[i]] = i;
		} 
	} 
	int pos = 1,k = 0;
	while(pos <= n){
		memset(l,0,sizeof l);
		for(int i = pos;i <= n;i++){
			l[++k] = a[i];
			if(b[i] != 0) i = b[i];
		}
		for(int i = 1;i <= k;i++)
			cnt[l[i]]++;
		k = 0,pos++;
	}
	for(int i = 1;i <= m;i++)
		cout << cnt[i] << " ";
	return 0;
}