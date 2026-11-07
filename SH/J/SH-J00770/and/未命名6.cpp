#include <bits/stdc++.h>
using namespace std;
int n,m;
bool flag=true;
//int mx=0;
//int mc=0; 
const int N=2e5;
int a[N];
int ans=0;
void dfs (int cur,int sum,int cnt){
	if (cur>n and cnt==m){
		ans=max(sum,ans);
		return ;
	}
	if (sum==0 and cur==n) return ;
	int tmp=sum&a[cur];
//	cout << tmp << endl;
	dfs(cur+1,tmp,cnt+1);
	dfs(cur+1,a[cur],1);
	dfs (cur+1,sum,cnt);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
//		if (a[i] > mx){
//			mx=a[i];
//			mc=1;
//		}
//		else if (a[i]==mx) mc++;
		if (a[i]!=i-1){
			flag=0;
		}
	}
	if (flag){
		int tmp=a[n];
		for (int i=n-1;i>n-m;i--){
			tmp=tmp&a[i];
		}
		cout << tmp;
		return 0;
	}
	dfs (1,0,0);
	cout << ans ;
//	cout<< " "<< mx << " " << mc 
	return 0; 
} 








//yangshuangyinigedogkengwonitamabushibulaikaoma??
