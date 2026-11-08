#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,cnt;
ll len,hf;
struct node{
	ll len;char c;
}a[200005];
struct Segment{
	ll l,r;char c;
}d[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n;for(int i=1;i<=n;i++)cin>>a[i].len>>a[i].c,len+=a[i].len;hf=(len+1)/2;int i;
	for(i=1;i<=n;i++){
		if(hf>=a[i].len) hf-=a[i].len,++cnt,d[cnt]={d[cnt-1].r+1,d[cnt-1].r+a[i].len,a[i].c},a[i].len=0;
		else{
			a[i].len-=hf,++cnt,d[cnt]={d[cnt-1].r+1,d[cnt-1].r+hf,a[i].c},hf=0;
			break;
		} 
	}ll ans=0;if(len%2==1) d[cnt].r--; 
	for(;i<=n;i++){
		while(cnt){
			if(a[i].len>=d[cnt].r-d[cnt].l+1) {
				a[i].len-=d[cnt].r-d[cnt].l+1;
				if(d[cnt].c!=a[i].c) ans+=d[cnt].r-d[cnt].l+1;
				cnt--;	
			}
			else {
				if(d[cnt].c!=a[i].c) ans+=a[i].len;
				d[cnt].r-=a[i].len,a[i].len=0;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
进行一个嚣张的活动
n [l,r],l,r>=(n+1)/2 对应点[n-r+1,n-l+1] 
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/
