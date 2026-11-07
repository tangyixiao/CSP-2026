# include <bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
map <int,bool> f[200010];
int main(){
	freopen("and.in","r",stdin);// 
	freopen("and.out","w",stdout);// 
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=min(i,m);j>=2;j--){
			for (auto it:f[(j-1)]){
				int x=it.first,y=it.second;
				x=(x&a[i]);
				f[j][x]=1;
				// cout << j << ' ' << x << endl;
			}
		}
		f[1][a[i]]=1;
	}
	for (auto it:f[m]){
		int x=it.first;
		ans=max(ans,x);
		// cout << x << ' ' << ans << endl;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
f[x][m]:

4 2
3 15 12 12

5 3
31 3 1 15 7
*/
