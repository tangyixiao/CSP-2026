#include <bits/stdc++.h>
using namespace std;
const int N=200005;
#define int long long
int n,m,a[N],ans;
void dfs(int sum,int p,int cho){
	if (p==n+1&&cho<m)return;
	if (p==n+1){
		ans=max(ans,sum);
		return;
	}
	if (cho<m)dfs(sum&a[p],p+1,cho+1);
	dfs(sum,p+1,cho);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)cin>>a[i];
	if (n<=20){
		dfs(2147483647,1,0);
		cout<<ans;
		return 0;
	}
	if (m==1){
		for (int i=1;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if (m==2&&n<=2005){
		for (int i=1;i<=n;i++)
			for (int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}
	if (m==n){
		ans=2147483647;
		for (int i=1;i<=n;i++)ans&=a[i];
	}
	bool f=1;
	for (int i=1;i<=n;i++)
		if (a[i]!=i-1)f=0; 
	int dvi=n,loge=0;
	while (dvi){
		loge++;
		dvi/=2;
	}
	if ((int)pow(2,loge)!=n||f==0){
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
	return 0;
	}
	if (m>n/2){
		cout<<0;
		return 0;
	}
	
	int wei=1;
	for (int i=1;i<=loge;i++){
		ans+=(n/2)*wei;
		wei*=2;
	}
	cout<<ans;
	return 0;
} 
