#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+338;
long long n,m,a[maxn],pw[338],tk=1,ans=0,l=1;
bool f[maxn],f1[maxn];
vector<long long> e[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	pw[0]=1;
	for (int i=1;i<=30;i++){
		tk*=2;
		pw[i]=tk;
	}
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int j=30;j>=0;j--){
		memset(f1,0,sizeof(f1));
		long long cnt=0;
		for (int i=1;i<=n;i++){
			if (f[i]) continue;
			if (a[i]-pw[j]>=0){
				a[i]-=pw[j];
				cnt++;
			}else{
				f1[i]=1;
			}
		}
		if (cnt>=m){
			ans+=pw[j];
			for (int i=1;i<=n;i++){
				if (!f[i]) f[i]=f1[i];
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}
