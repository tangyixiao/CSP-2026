#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const int maxn=2e5+5;
int n,m;
ll s[maxn];
int a[maxn][33];
int cnt[33];
int ans[maxn];
int ve[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		ll q;
		cin>>s[i];
		q=s[i];
		for(int j=0;(q>>j)>0;++j){
			if((q>>j)&1){
				a[i][j]++;
				cnt[j]++;
			}
		}
	}
	int k=0;
	bool f=0;
	for(int i=31;i>=0;--i){
		if(cnt[i]>=m&&!f){
			for(int j=1;j<=n;++j){
				if(a[j][i]==1){
					ve[++k]=j;
					for(int p=0;p<=31;++p){
						if(a[j][p])ans[p]++;
					}
				}
			}
			if(k==m){
				break;
			}
			f=1;
		}
		else if(ans[i]>=m){
			for(int j=1;j<=k;++j){
				if(ve[j]==-1)continue;
				if(!a[ve[j]][i]){
					ve[j]=-1;
					for(int p=0;p<=31;++p){
						if(a[j][p])ans[p]--;
					}
				}
			}
		}
	}
	ll pp=0;
	f=0;
	for(int i=1;i<=k;++i){
		if(!f&&ve[i]!=-1){
			pp=s[ve[i]];
			f=1;
		}
		else if(ve[i]!=-1){
			pp=pp&s[ve[i]];
		}
		
	}
	cout<<pp;
    fclose(stdin);
    fclose(stdout);
	return 0;
}