#include <bits/stdc++.h>
using namespace std;
int n,m,ans,cnt,num;
long long a[200010];
void dp(int i){
	if (num==m){
		ans=max(ans,cnt);
		return;
	}
	if (num>m)return;
	if (i>=n+1){
		if (num==m)ans=max(ans,cnt);
		return;
	}
	int real=cnt;
	if (cnt==0)cnt=a[i];
	else cnt&=a[i];
	num++;
	dp(i+1);
	cnt=real;
	num--;
	dp(i+1);
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)cin>>a[i];
	dp(1);
	cout<<ans;
	return 0;
}







