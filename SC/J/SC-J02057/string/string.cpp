#include<bits/stdc++.h>
#define int long long
using namespace std;
struct st{
	int num;
	char zf;
};
int n,a[200005],x,ans;
char c[200005];
vector<st>l,r;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		x+=a[i];
	}
	x/=2;
	int ll=0,rr=0;
	for(int i=1;i<=n;i++){
		if(ll+a[i]<x){
			ll+=a[i];
			l.push_back({a[i],c[i]});
		}else{
			l.push_back({x-ll,c[i]});
			break;
		}
	}
	for(int i=n;i>=1;i--){
		if(rr+a[i]<x){
			rr+=a[i];
			r.push_back({a[i],c[i]});
		}else{
			r.push_back({x-rr,c[i]});
			break;
		}
	}
	int tot=0,cnt=l[0].num;
	char flag=l[0].zf;
	for(int i=0;i<r.size();i++){
		if(r[i].num<=cnt){
			cnt-=r[i].num;
			if(r[i].zf!=flag){
				ans+=r[i].num;
			}
		}else{
			while(r[i].num>cnt){
				if(r[i].zf!=flag){
					ans+=cnt;
				}
				r[i].num-=cnt;
				tot++;
				cnt=l[tot].num,flag=l[tot].zf;
			}
			cnt-=r[i].num;
			if(r[i].zf!=flag){
				ans+=r[i].num;
			}
		}
	}
	cout<<ans;
	return 0;
}
