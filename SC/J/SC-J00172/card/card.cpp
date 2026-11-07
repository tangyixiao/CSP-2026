#include<bits/stdc++.h>

using namespace std;

const int MAXN = 500005;
const int MAXM = 300005;
int n, m, a[MAXN], cnt[MAXM], now[MAXM], pos[MAXM], npos, lpos;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++){
		npos = -1;
		for(int k=1; k<=m; k++) pos[k] = -1;
		for(int k=1; k<=m; k++) now[k] = 0;
		for(int j=i; j<=n; j++){
			if(pos[a[j]]<0){
				npos++;
				pos[a[j]] = npos;
				now[npos] = a[j];
			}
			else{
				lpos = pos[a[j]];
				for(int k=lpos; k<=npos; k++){
					pos[now[k]] = -1;
					now[k] = 0;
				}
				npos = lpos;
				pos[a[j]] = npos;
				now[npos] = a[j];
			}
		}
		for(int k=1; k<=m; k++){
			if(pos[k]>-1) cnt[k]++;
		}
	}
	for(int i=1; i<=m; i++) cout<<cnt[i]<<' ';
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}