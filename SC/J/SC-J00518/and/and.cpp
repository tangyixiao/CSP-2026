#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],s[200005][35],l[200005],ans;
bool vis[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		long long k=a[i];
		while(k){
			s[i][++l[i]]=k%2;
			k/=2;
		}
	}
	for(int i=31;i>=1;i--){
		long long q=0;
		for(int j=1;j<=n;j++){
			if(!vis[j]){
				if(s[j][i]){
					q++;
				}
			}
		}
		if(q>=m){
			for(int j=1;j<=n;j++){
				if(!vis[j]){
					if(!s[j][i]){
						vis[j]=1;
					}
				}
			}
			ans+=pow(2,i-1);
		}
	}
	cout<<ans;
	return 0;
}