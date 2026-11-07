#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1)cout<<n;
	else if(m==2){
		if(a[n]==1){
			if(a[n-1]==2)cout<<n<<' '<<1;
			else cout<<n<<' '<<0;
		}else{
			if(a[n-1]==1)cout<<1<<' '<<n;
			else cout<<0<<' '<<n;
		}
	}else{
		for(int i=1;i<=m;i++)cout<<i<<' ';
	}
	return 0;
}
