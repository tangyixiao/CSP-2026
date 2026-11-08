#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int ans,res;
int n,m;
int a[N];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		ans=a[i];
		for(int j=i+1;j<=m;j++){
			ans=ans&a[j];
		}
		res=max(ans,res);
	}
	cout<<res;
	return 0;
}
