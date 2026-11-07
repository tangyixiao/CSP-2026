#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,cnt,ans,cnt2;
struct node{
	int a,i;
	char x;
}a[1000000],b[1000000];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.ans","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i].a>>a[i].x;
		cnt+=a[i].a;
	} 
	int ii=2;
	a[1].i=1;
	b[1].a=a[1].a;
	b[1].x=a[1].x;
	while(ii<=n){
		if(a[ii].x==a[ii-1].x){
			a[ii].i=a[ii-1].i;
			b[a[ii].i].a+=a[ii].a;
			b[a[ii].i].x=a[ii].x;
		}else{
			a[ii].i=a[ii-1].i+1;
			b[a[ii].i].a+=a[ii].a;
			b[a[ii].i].x=a[ii].x;
		}
		++ii;
	}
	int l=1,r=n,cnt1=0;
	while(cnt1<cnt/2){
		if(b[l].x!=b[r].x){
			int minn=min(b[l].a,b[r].a);
			cnt1+=minn;
			ans+=minn;
			b[l].a-=minn;
			b[r].a-=minn;
		}else{
			int minn=min(b[l].a,b[r].a);
			cnt1+=minn;
			b[l].a-=minn;
			b[r].a-=minn;
		}
		if(b[l].a==0&&b[r].a==0)--r,++l;
		else if(b[l].a==0)++l;
		else r--;
		
	}
	cout<<ans<<'\n';
	return 0;
}