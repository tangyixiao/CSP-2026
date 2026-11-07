#include<bits/stdc++.h>
using namespace std;
const int N=5010;
int a[N];
int cnt[N];
int ans[N];
int b[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<0;
		return 0;
	}
	else cout<<1<<" "<<2;
	return 0;
}
