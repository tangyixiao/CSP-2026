#include<bits/stdc++.h>
using namespace std;
int ans[300005];
int a[500005];
int vis[500005];
int vis1[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,pos=0;
	cin >> n>>m;
	for(int i= 1;i <= n;i++) cin >> a[i];
	for(int i = 1; i <= n;i++){
		memset(a,0,sizeof(a));
		memset(vis,0,sizeof(vis));
		memset(vis1,0,sizeof(vis1));
		for(int j = i; j <= n;j++){
			if(vis1[a[j]]){
				int pos1 = pos;
				for(int s = vis[a[j]];s<=pos1;s++){
					pos--;
					vis1[a[s]]=0;
				}
				vis[a[j]]=pos; 
				vis1[a[j]]=0;
			}
			pos++;
			vis1[a[j]]++;
		}
		for(int j = 1; j <= m;j++){
			if(vis1[j])
				ans[j]++;
		}
	}
	for(int i = 1; i <= m;i++){
		cout << ans[i]<<' ';
	}
	return 0;
}
