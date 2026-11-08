#include<bits/stdc++.h>
using namespace std;

int n,m,cnt[300005],a[500005],t[300005];
bool ia=1,b[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		t[a[i]]++;
		if(a[i] < a[i-1]) ia = 0;
	}
	if(ia){
		int ans = 0;
		for(int i=1;i<=m;i++){
			cout << ans+t[i] << ' ';
			ans += t[i];
		}
		return 0;
	}
	for(int k=1;k<=n;k++){
		memset(b,0,sizeof(b));
		for(int i=k;i<=n;i++){
			if(b[a[i]] == 0){
				b[a[i]] = 1;
			}
			else{
				int l;
				for(int j=i-1;j>=k;j--){
					if(a[j] == a[i]){
						l = j;
						break;	
					}
				}
				for(int j=l+1;j<i;j++){
					b[a[j]] = 0;
				}
			}
		}
		for(int i=1;i<=m;i++){
			if(b[i]) cnt[i]++;
		}
	}
	for(int i=1;i<=m;i++) cout << cnt[i] << ' ';
	return 0;
}
