#include<bits/stdc++.h>
using namespace std;
int n,m,num,ans,cnt;
int a[200005];
int c[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<m;i++){
		if(int(a[i]&a[i+1])!=0){
			ans = int(a[i]&a[i+1]);
		}
		else{
			ans = int(a[i]&a[i+2]);
		}
	}
	cout<<ans;
	return 0;
}
