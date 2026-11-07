#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[300005],maxn=-1e9,sum;
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=0;i<=m;i++){
		sum=a[0]^a[i];	
	}
	cout<<sum;
	return 0;
} 
