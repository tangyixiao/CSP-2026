#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N],ans;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0); 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}
	ans=a[1]&a[2];
	for(int i=3;i<=m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}