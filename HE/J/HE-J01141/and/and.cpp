#include<bits/stdc++.h>
using namespace std;
int n,m,tim,res,a[200010],f[200010];
void dfs(int x,int step,int ans){
	tim++;
	if (ans<f[step]){
		return;
	}
	if (tim>=6e7){
		cout << f[m] << endl;
		exit(0);
	}
	if (step==m){
		f[step]=max(f[step],ans);
		return;
	}
	for (int i=x;i<=n;i++){
		int to=ans&a[i];
		if (step==0){
			to=a[i];
		}
		if (to<f[step+1]){
			continue;
		}
		dfs(i+1,step+1,to);
		dfs(i+1,step,ans);
	}
	return;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		f[i]=0;
	}
	dfs(1,0,0);
	cout << f[m] << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
