#include<bits/stdc++.h>
#define int long long
using namespace std;
struct px{
	int num;
	char ch;
}a[200005];
signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].ch;
		a[i].num+=a[i-1].num; 
	}
	int ans=0;
	for(int i=1,j=n;;j--){
		if(a[j].num<=(a[n].num+1>>1))break;
		int l=a[n].num-a[j].num,r=min((a[n].num>>1),a[n].num-max((n+1>>1),a[j-1].num));
		while(a[i].num<=r){
			if(a[i].ch!=a[j].ch)ans+=a[i].num-max(l,a[i-1].num);
			i++;
		}
//		cout<<ans<<'\n';
		if(a[i].ch!=a[j].ch)ans+=r-max(l,a[i-1].num);
//		cout<<i<<' '<<j<<' '<<l<<' '<<r<<' '<<a[i].num<<' '<<a[i-1].num<<' '<<ans<<'\n';
	}
	cout<<ans;
	return 0;
}
