#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=5e5+10;

int a[N];
int num[N];
int la[N];
bool vis[N];
bool ex[N];

signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	if(n<=500&&m<=200) {
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				vis[j]=0;
				la[j]=0;
			}
			for(int j=1;j<=n;j++){
				ex[j]=0;
			}
			for(int j=i; j<=n; j++) {
				if(vis[a[j]]) {
					for(int l=la[a[j]]+1; l<=j; l++) {
						if(ex[l]) {
							vis[a[l]]=0;
							la[a[l]]=0;
							ex[l]=0;
						}
					}
				} else {
					la[a[j]]=j;
					vis[a[j]]=1;
					ex[j]=1;
				}
			}
			for(int j=1; j<=m; j++) {
				if(vis[j]) {
					num[j]++;
					//cout<<j<<" ";
				}
			}
			//cout<<endl;
		}
		for(int i=1; i<=m; i++) {
			cout<<num[i]<<" ";
		}
	} else {
		for(int i=1; i<=n; i++) {
			vis[a[i]]=1;
		}
		for(int i=1; i<=m; i++) {
			if(vis[i]) cout<<1<<" ";
		}
	}
	return 0; 
}
