#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[200005],s,ans;
int b[200005];

int wei(){
	int j;
	j=b[1];
	for (int i=2;i<=m;i++){
		j&=b[i];
	}
	
	return j;
}

int dfs(int x,int cnt){
	if (x>n) return 0;
	cnt++;
	
	if (cnt==m+1) {
		cnt--;
		return a[x];
    }
    b[cnt]=a[x];
    for (int i=1;i<=n-1;i++){
    	b[cnt+1]=dfs(x+i,cnt);
	}
	s=wei();
	ans=max(ans,s);
    
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int i=1;i<=n-m+1;i++) dfs(i,0); 
	cout << ans;
	return 0;
}
