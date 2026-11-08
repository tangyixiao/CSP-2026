#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n=0,m=0,a[N],cnt=0,maxx=0;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	for(int j=29;j>=0;j--){
		int opt=cnt+(1ll<<j),num=0;
		for(int i=1;i<=n;i++){
			if((a[i]&opt)==opt) num=num+1;
		}
		if(num>=m) cnt=opt;
//		cout<<mmm<<'\n';
	}
	cout<<cnt;
	return 0;
} 
