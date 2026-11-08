#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=8e5+10;
ll s[N];
int a[N];
int tot;
char c[N];
ll sum;
ll b[N];
	int n;
char fid(ll x){
	int l=1,r=n;
	int ret=0;
	while(l<=r){
		int mid=(l+r)>>1;
//		cout<<mid<<' '<<s[mid]<<'\n';
		if(x<=s[mid]){
			ret=mid;
			r=mid-1;
		}
		else {
			l=mid+1;
		}
	}
	return c[ret];
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		cin>>c[i];
		b[++tot]=sum+1;
		sum+=a[i];
		s[i]=sum;
		b[++tot]=sum;
//		cout<<c[i]<<'\n';
	}
//	ll mid=(sum+1)>>1;
//cout<<b[1]<<'\n';
	int tmp=tot;
	for(int i=1;i<=tmp;i++)
	{
		b[++tot]=sum+1-b[i];
	}
	sort(b+1,b+1+tot);
	tot=unique(b+1,b+1+tot)-(b+1);
	ll ans=0;
//	cout<<fid(1)<<'\n';
//	cout<<b[tot/2]<<' '<<sum<<'\n';
	for(int i=1;i<=(tot>>1);i++){
		if(fid(b[i])!=fid(sum+1-b[i])){
			ans+=b[i+1]-b[i];
		}
//		cout<<b[i]<<' '<<sum+1-b[i]<<'\n';
//		cout<<fid(b[i])<< ' '<<fid(sum+1-b[i])<<' '<<b[i+1]-b[i]<<'\n';
	}
	cout<<ans;
	return 0;
} 
