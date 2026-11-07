#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
constexpr int maxn=2e5+7;
#define int long long
int n,a[maxn],ans;
char c[maxn];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i]>>c[i],a[i]+=a[i-1];
//	int l=sum>>1,r=(sum&1)+(sum>>1)+1;
	int mid=a[n]>>1,tmp=0,mn;
	for(int i=1;i<=n;++i)
		if(a[i]>=mid&&a[i-1]<mid){
			mn=i;break;
		}
//	cout<<mn<<'\n'<<"li ri l r a\n";
	for(int li=mid-a[mn-1],ri=a[mn]-mid-(a[n]&1),l=mn,r=mn;l>0&&r<=n;){
		if(l==r&&ri<=0)++r,ri=a[r]-a[r-1];
//		cout<<li<<' '<<ri<<' '<<l<<' '<<r<<' '<<ans<<'\n';
		while(li>ri&&l>0&&r<=n){
			if(c[l]!=c[r])
				ans+=ri;
			li-=ri,++r;
			if(r<=n)ri=a[r]-a[r-1];
			else break;
		}while(li<ri&&l>0&&r<=n){
			if(c[l]!=c[r])
				ans+=li;
			ri-=li,--l;
			if(l)li=a[l]-a[l-1];
			else break;	
		}while(li==ri&&l>0&&r<=n){
			if(c[l]!=c[r])ans+=li;
			--l,++r;
			if(r<=n)ri=a[r]-a[r-1];
			else break;
			if(l)li=a[l]-a[l-1];
			else break;
		}
	}cout<<ans<<'\n';
	return(0);
}