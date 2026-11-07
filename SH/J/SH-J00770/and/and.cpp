#include <bits/stdc++.h>
using namespace std;
int n,m;
bool flag=true;
bool ff=true;
int mx=0;
int mc=0; 
const int N=2e5+7;
int a[N];
int ans=0;
void dfs (int cur,int sum,int cnt){
	bool f=1;
	if (cnt==m) f=true;
	if (cur>n){
		if (f)ans=max(sum,ans);
//		cout << ans << " " << cnt << endl;
		return ;
	}
	
//	if (sum==0 and cur==n) return ;
	int tmp=sum&a[cur];
	if (cur==1) dfs(cur+1,a[cur],cnt+1);
//	cout << tmp << endl;
	else dfs(cur+1,tmp,cnt+1);
//	cout << a[cur] << "--->" << tmp << " ";
	dfs(cur+1,a[cur+1],1);
//	cout << "st" << " " << a[cur+1] << " ";
	dfs (cur+1,sum,cnt);
//	cout << "skip" << " ";
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		int x=a[i];
		while (x){
			if (x%2!=1){
				ff=0;
			}
			x/=2;
		}
		if (a[i] > mx){
			mx=a[i];
			mc=1;
		}
		else if (a[i]==mx) mc++;
		if (a[i]!=i-1){
			flag=0;
		}
	}
	if (flag){
//		cout << 1;
		int tmp=a[n];
		int aa;
		for (int i=n;i>n-m+1;i--){
			aa=a[i]&a[i-1];
//			cout << a[i] << "&" << a[i-1] << "=" << aa << endl;
		}
		cout << aa;
//		cout << "forza";
		return 0;
	}
	if (ff) {
		sort (a+1,a+1+n);
		cout << a[n-m+1];
		return 0;
	}
	dfs (1,0,0);
	cout << ans ;
//	cout<< " "<< mx << " " << mc ;
	return 0; 
} 








//yangshuangyinigedogkengwonitamabushibulaikaoma??
