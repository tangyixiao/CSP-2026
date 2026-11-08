#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll=long long;
const int N=4e5+5;
int n;
ll s[2*N],ans=0,sum[30][4*N],a[2*N],b[2*N],zg[2*N],len[2*N];
char c[2*N],c1[2*N];
unordered_map<ll,int>mp;
struct node{
	ll l,r;
};
vector<ll>vec;
bool operator < (const node& i,const node& j){
	return i.r<j.r;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],s[i]=s[i-1]+a[i];
	for(int i=1;i<=n;i++){
		if(s[i-1]+1<=(s[n]+1)/2&&s[i]>(s[n]+1)/2){
			if(s[n]%2==0){
				int ad=a[i]-(s[n]/2-s[i-1]);
				a[i]=s[n]/2-s[i-1];
				if(a[i]==0){
					a[i]=ad;
					continue;
				}
				if(ad==0) continue;
				for(int j=n;j>=i+1;j--) a[j+1]=a[j],c[j+1]=c[j];
				a[i+1]=ad;
				c[i+1]=c[i];
			}
			else{
				int ad=a[i]-(s[n]/2-s[i-1])-1;
				a[i]=s[n]/2-s[i-1];
				if(a[i]==0){
					a[i]=ad;
					continue;
				}
				if(ad==0) continue;
				for(int j=n;j>=i+1;j--) a[j+1]=a[j],c[j+1]=c[j];
				a[i+1]=ad;
				c[i+1]=c[i];
			}
			break;
		}
	}
	int idx=0;
	for(int i=1;i<=n+2;i++){
		if(a[i]) b[++idx]=a[i],c1[idx]=c[i];
	}
	for(int i=1;i<=idx;i++) a[i]=b[i],c[i]=c1[i];
	n=idx;
	for(int i=1;i<=n;i++) s[i]=s[i-1]+a[i];
	int l=1,r=n,maxn=0;
	while(l<=r){
		int mid=l+r>>1;
		if(s[mid]<=s[n]-s[mid]) maxn=max(maxn,mid),l=mid+1;
		else r=mid-1;
	}
	ll L=1;
	for(int i=1;i<=maxn;i++){
		ll R=s[i];
		vec.push_back(L),vec.push_back(R+1);
		L=R+1;
	}
	ll R=s[n];
	for(ll i=n;i>=maxn+1;i--){
		ll L=R-a[i]+1;
		ll ls=s[n]-R+1,rs=s[n]-L+1;
		vec.push_back(ls-1),vec.push_back(rs);
		R=L-1;
	}
	sort(vec.begin(),vec.end());
	vec.erase(unique(vec.begin(),vec.end()),vec.end());
	idx=0;
	for(int i=0;i<vec.size();i++){
		if(i&&vec[i]>vec[i-1]+1) len[++idx]=(vec[i]-1)-(vec[i-1]+1)+1;
		len[++idx]=1;
		mp[vec[i]]=idx;
	}
	L=1;
	for(int i=1;i<=maxn;i++){
		ll R=s[i];
		int ll=mp[L],rr=mp[R+1];
		sum[c[i]-(int)('a')][ll]+=1,sum[c[i]-(int)('a')][rr]-=1;
		L=R+1;
	}
	for(int i=0;i<=25;i++) for(int j=1;j<=idx;j++) sum[i][j]+=sum[i][j-1];
	for(int i=0;i<=25;i++) for(int j=1;j<=idx;j++) sum[i][j]*=len[j];
	for(int i=0;i<=25;i++) for(int j=1;j<=idx;j++) sum[i][j]+=sum[i][j-1];
	R=s[n];
	for(int i=n;i>=maxn+1;i--){
		ll L=R-a[i]+1;
		ll ls=s[n]-R+1,rs=s[n]-L+1;
		int ll=mp[ls-1],rr=mp[rs];
//		cout<<(sum[c[i]-(int)('a')][rr]-sum[c[i]-(int)('a')][ll])<<endl;
		ans+=(rs-ls+1)-(sum[c[i]-(int)('a')][rr]-sum[c[i]-(int)('a')][ll]);
		R=L-1;
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b 

4
2 a
5 b
1 c
3 a
*/
