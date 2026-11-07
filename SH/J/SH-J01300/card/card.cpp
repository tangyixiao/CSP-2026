# include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
bool vis[500010];
int sta[500010];
int R[500010];
int ans[500010];
int lenR;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i++) cin>>a[i];
	for(int i = 1; i <= n; i++){
		lenR = 1;
		memset(vis,0,sizeof(vis));
		memset(sta,0,sizeof(sta));
		memset(R,0,sizeof(R));
		for(int j = i; j <= n; j++){
			//for(int k = 1; k < lenR; k++) cout<<i<<"~"<<j<<" "<<R[k]<<" ";
			//cout<<"\n";
			if(vis[a[j]]){
				int cnt;
				for(int k = sta[a[j]]; k < lenR;k++){
					R[k] = 0;
					vis[k] = false;
					sta[k] = 0;
					cnt++;
				}
				lenR -= cnt;
				R[lenR] = a[j];
				sta[a[j]] = lenR;
				vis[a[j]] = true;
				lenR++; 
			}
			else{
				R[lenR++] = a[j];
				sta[a[j]] = lenR;
				vis[a[j]] = true;
			}
		}
		for(int k = 1; k <= lenR; k++){
			ans[R[k]]++;
			//cout<<ans[R[k]]<<" ";
		}
		//cout<<"\n";
	}
	for(int i = 1; i <= m; i++) cout<<ans[i]<<" ";
	return 0;
} 
/*
1:
3
lenR = 1
R: 3
sta[3] = 1
sta: 0 0 1
vis[3] = T
vis: 0 0 1
lenR = 2

1
lenR = 2
R: 3 1
sta[1] = 2
sta: 2 0 1
vis[1] = T
vis: 1 0 1
lenR = 3

2
lenR = 2
R: 3 1 2
sta[2] = 3
sta: 2 3 1
vis[2] = T
vis: 1 1 1
lenR = 4

1
lenR = 2
R: 3 1
sta[1] = 2
sta: 2 0 1
vis[1] = T
vis: 1 0 1
lenR = 3
*/
