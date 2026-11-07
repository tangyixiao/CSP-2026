#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005],ans[200005];
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m,flag=1,flag2=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int z=0;
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans[++z]=(a[i]&a[j]);
		}
	}
	sort(ans+1,ans+z+1,cmp);
	if(m==2){
		cout<<ans[1];
		return 0;
	}
}
