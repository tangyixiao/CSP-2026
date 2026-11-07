#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[500005];
int pok[300005],cnt;
int ct[300005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
	for(int i = 1;i <= n;i++){
		cnt = 0;
		memset(ct,0,sizeof(ct));
		memset(pok,0,sizeof(pok));
		for(int j = i;j <= n;j++){
			if(ct[a[j]] && ct[a[j]] <= cnt){
				cnt = ct[a[j]];
				ct[a[j]] = j; 
			}
			else{
				pok[++cnt] = a[j];
				ct[a[j]] = j;
			}
		}
		for(int j = 1;j <= cnt;j++){
			ans[pok[j]]++;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << ' ';
	}
	
	return 0;
}
