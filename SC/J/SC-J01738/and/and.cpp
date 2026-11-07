#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=5e5+5;

ll a[N];
ll dp[N];
ll mp[70];
int f[N][70];
vector<int> b;
int kkk;

bool cmp(int xi,int yi){
	int k=kkk;
	ll x=a[xi],y=a[yi];
	while(k>0&&(x&(1<<k))==(y&(1<<k))){
		k--;
	}
	return (x&(1<<k))>(y&(1<<k));
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--){
		for(int j=log2(a[i]);j>=0;j--){
			mp[j]=mp[j];
			if(a[i]&(1<<j)){
				mp[j]++;
				f[i][j]=1;
			}
		}
	}
	ll ans=0;
	for(int i=65;i>=0;i--){
		if(mp[i]>=m){
			for(int j=1;j<=n;j++){
				b.push_back(j);
			}
			kkk=i;
			sort(b.begin(),b.end(),cmp);
			ans=a[b[0]];
			for(int j=1;j<m;j++){
				ans&=a[b[j]];
			}
			break;
		}
	}
	cout<<ans;
	return 0;
}