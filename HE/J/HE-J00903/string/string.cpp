#include<bits/stdc++.h>
#define int long long
#define inf 0x3f3f3f3f3f3f3f3f
#define Code ios::sync_with_stdio(0);
#define by cin.tie(0);
#define Co_led cout.tie(0);
#define VNAME(x) #x
#define C(x) cout<<VNAME(x)<<":"<<x<<endl;
using namespace std;
int n,a[200500],sum=0,cnt=0;
char c[200500];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	Code by Co_led
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[++cnt];
		cin>>c[cnt];
		if(c[cnt]==c[cnt-1]) a[cnt-1]+=a[cnt],cnt--;
	}
//	for(int i=1;i<=cnt;i++){
//		cout<<a[i]<<" "<<c[i]<<endl;
//	}
	int l=1,r=cnt,lz=0,rz=0,ans=0;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]-lz>a[r]-rz){
				lz+=a[r--]-rz;
				rz=0;
			}else if(a[l]-lz==a[r]-rz){
				l++,r--;
				lz=0,rz=0;
			}else{
				rz+=a[l++]-lz;
				lz=0;
			}
			continue;
		}
		if(a[l]-lz>a[r]-rz){
			ans+=a[r]-rz;
			lz+=a[r--]-rz;
			rz=0;
		}else if(a[l]-lz==a[r]-rz){
			ans+=a[l]-lz;
			l++,r--;
			lz=0,rz=0;
		}else{
			ans+=a[l]-lz;
			rz+=a[l++]-lz;
			lz=0;
		}
	}
	cout<<ans;
	return 0;
}//100
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
/*
2
2 a
3 a
*/
