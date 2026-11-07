#include<bits/stdc++.h>
using namespace std;
int len=0,tot=1,sum=INT_MAX,ans=0,n,m,a[200005];
void dfs(){
	if(len == m){ans = max(ans,sum);return;}
	if(sum <= ans)return;
	if(tot == n+1)return;
	int sum_ = sum,tot_ = tot;
	len++;
	for(int i = tot;i <= n;i++){
		sum &= a[i],tot = i+1,dfs(),tot = tot_,sum = sum_;
	}len--;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}sort(a+1,a+n+1,greater<int>());
	dfs();
	cout << ans;
}
