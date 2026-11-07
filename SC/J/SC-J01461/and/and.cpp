#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
bool cmp(int x,int y){
	return x>y;
}
int main(){
    freopen("and","r",stdin);
	freopen("and","w",stdout);
	int m,n,ans[N];
	long long a[N];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
		return 0;
	}
	
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++) ans=ans and a[i];
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[m];
	return 0;
}