#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==1){
		cout<<a[1];
		return 0;
	}
	int cnt[3500];
	for(int i=2;i<=n;i++){
		if(a[i]!=a[i-1]) cnt[a[i]]++,cnt[a[i-1]]++;
	}
	for(int i=1;i<=m;i++){
		if(cnt[i]) cout<<cnt[i]<<" ";
	}
	return 0;
}
