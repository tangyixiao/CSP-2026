#include<bits/stdc++.h>
#define pii pair<int,int>
#define int long long
#define endl '\n'
using namespace std;
const int maxn=200000+10;
const int maxa=30+10;
const int INF=0x3f3f3f3f3f3f3f3f;
int n,m;
int a[maxn];
int t[maxa];
int w;
int maxw;
int q;
int ans;
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	maxw=-INF;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=30;j++){
			q=1<<(j-1);
			if(q>a[i]){
				w=j-1;
				break;
			}
			if((a[i]&q)==q) t[j]++;
		}
		maxw=max(maxw,w);
	}
	for(int i=maxw;i>=1;i--){
		if(t[i]<m){
			for(int j=1;j<=n;j++){
				q=1<<(i-1);
				if(a[j]>=q) a[j]=a[j]^q;
			}
		}
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++) ans=ans&a[i];
	cout<<ans<<endl;
	return 0;
}
//不辨真伪，勿论虚实